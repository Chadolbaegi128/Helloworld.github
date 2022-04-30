using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Prop : MonoBehaviour
{
    //Prop 오브젝트가 파괴될 때마다
    //5점씩 점수가 오름
    public int score = 5;

    //Prop 오브젝트가 파괴될 때마다
    //프리팹으로 만들어진 Particle 효과를
    //불러옴
    public ParticleSystem explosionParticle;

    //Prop 오브젝트의 체력
    public float hp = 10f;

    //외부에서 데미지를 주면 
    //데미지 계산 후 자기자신을 파괴시키는 메서드
    public void TakeDamage (float damage)
    {
        //hp = hp - damage;
        hp -= damage;

        if (hp <= 0)
        {
            //Prop 오브젝트의 체력이 0이 되면
            //Particle 효과를 생성하는 코드
            ParticleSystem instance = Instantiate (explosionParticle,transform.position,
                transform.rotation);

            AudioSource explosionAudio = instance.GetComponent<AudioSource> ();

            //AudioSource.Play() 메서드가 null값을 참조하기 때문에
            //"ArgumentNullException" 오류가 발생할 경우
            //if("AudioSource 클래스 인스턴스명" != null)을 이용해
            //해결해야 한다.
            if (explosionAudio != null)
            {
                explosionAudio.Play ();
            }

            //Prop이 파괴되기 전에 GameManager AddScore 메서드에
            //점수를 추가해줌
            GameManager.instance.AddScore(score);

            //파괴되지 않는 Prop 오브젝트는
            //일정시간이 지난 후 자동 파괴됨
            Destroy (instance.gameObject, instance.main.duration);

            //메모리 자원을 효율적으로 사용하면서
            //동시에 Prop 오브젝트를 없애기 위해
            // On,Off 방식으로 게임오브젝트를 설정함
            gameObject.SetActive (false);
        }
        
       
    }

    
}
