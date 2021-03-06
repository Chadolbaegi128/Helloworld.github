using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ball : MonoBehaviour
{
    //
    public LayerMask whatIsProp;

    public ParticleSystem explosionParticle;
    public AudioSource explosionAudio;

    //Ball이 바닥에 떨어질때
    //주변에 퍼지는 최대 힘
    public float maxDamage = 100f;

    //게임오브젝트들이 각자 체력이 있는데
    //그 체력을 넘는 데미지를 입으면 부서진다.

    //Ball이 바닥에 떨어지면서 발생하는
    //최대 폭발 힘
    public float explosionForce = 1000f;

    //몇몇 게임오브젝트가 바닥을 벗어나서
    //부서지지 않을때 자동으로 부서지게
    //되기까지 걸리는 시간(10초)
    public float lifeTime = 10f;

    //Ball이 바닥에 떨어질때 생기는 폭발반경(20m)
    public float explosionRadius = 20f;

   void Start()
    {        
        //부서지지 않을때 자동으로 부서지게
        //되기까지 걸리는 시간(10초)
        Destroy(gameObject, lifeTime);    
    }

    void OnTriggerEnter(Collider other)
    {
        //여러 Prop 오브젝트들의 Collider를 선별해서
        //특정 레이어를 가진 Collider에 효과 적용
        Collider[] colliders = Physics.OverlapSphere(transform.position,
            explosionRadius, whatIsProp);

        //폭발 반경에 있는 Prop 오브젝트의 Collider 갯수만큼
        //for문 실행됨
        for(int i = 0; i < colliders.Length; i++)
        {
            //폭발로 인한 물리 효과를 적용하기 위해
            //Rigidbody 컴포넌트 불러옴
            Rigidbody targetRigidbody = colliders[i].GetComponent<Rigidbody>();

            //특정 오브젝트가 폭발의 영향을 받아
            //얼마만큼의 힘으로 얼만큼 날아가는지 정해주는 메서드
            targetRigidbody.AddExplosionForce(explosionForce,transform.position,
                explosionRadius);

            //Prop 오브젝트에 데미지를 줌
            Prop targetProp = colliders[i].GetComponent<Prop>();
            float mDamage = CalculateDamage(colliders[i].transform.position);
            targetProp.TakeDamage(mDamage);
        }


        //자식오브젝트인 SmallExplosionEffect가
        //부모오브젝트인 Ball인 바닥에 닿으면 폭발함과 동시에
        //부모, 자식 관계가 해제되고 별개의 오브젝트로 방출됨
        explosionParticle.transform.parent = null;

        explosionParticle.Play();
        explosionAudio.Play();

        //Ball이 바닥 오브젝트에 닿아 파괴되는 순간
        //GameManager의 bIsRoundActive 변수가 false 값으로 변하여
        //코루틴 무한루프를 탈출하여 EndPhase에 도달함
        GameManager.instance.OnBallDestroy ();

        //메모리 낭비 방지를 위해 SmallExplosionEffect가
        //일정 시간이 지나면 파괴됨
        Destroy(explosionParticle.gameObject, explosionParticle.main.duration);

        //Ball이 바닥에 부딪혔을때 사라짐
        Destroy(gameObject);
    }

    //폭발 지점에서 얼마나 떨어져 있는지에 따라
    //Prop오브젝트의 데미지 계산을 차등 적용하는 메서드
    float CalculateDamage(Vector3 targetPosition)
    {
        Vector3 explosionToTargaet = targetPosition - transform.position;

        //Prop 오브젝트와 폭발지점 사이의 거리 구한 후 반환처리
        float mDistance = explosionToTargaet.magnitude;

        //폭발 반경 가장자리에서 Prop 오브젝트까지 거리가 얼마인지
        //구하는 코드
        float mEdgeToCenterDistance = explosionRadius - mDistance;

        //폭발 지점과 거리 차이로 인한 데미지 계산
        float mPercentage = mEdgeToCenterDistance / explosionRadius;
        float mDamage = maxDamage * mPercentage;

        //Prop 오브젝트가 가진 Collider의 크기로 인해 폭발 반경을
        //벗어나서 percentage 값이 음수가 나오게 되면
        //값을 damage 값을 0으로 처리함
        mDamage = Mathf.Max(0, mDamage);

        return mDamage;
    }
}
