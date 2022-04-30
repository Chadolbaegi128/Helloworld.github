using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ball : MonoBehaviour
{
    //
    public LayerMask whatIsProp;

    public ParticleSystem explosionParticle;
    public AudioSource explosionAudio;

    //Ball�� �ٴڿ� ��������
    //�ֺ��� ������ �ִ� ��
    public float maxDamage = 100f;

    //���ӿ�����Ʈ���� ���� ü���� �ִµ�
    //�� ü���� �Ѵ� �������� ������ �μ�����.

    //Ball�� �ٴڿ� �������鼭 �߻��ϴ�
    //�ִ� ���� ��
    public float explosionForce = 1000f;

    //��� ���ӿ�����Ʈ�� �ٴ��� �����
    //�μ����� ������ �ڵ����� �μ�����
    //�Ǳ���� �ɸ��� �ð�(10��)
    public float lifeTime = 10f;

    //Ball�� �ٴڿ� �������� ����� ���߹ݰ�(20m)
    public float explosionRadius = 20f;

   void Start()
    {        
        //�μ����� ������ �ڵ����� �μ�����
        //�Ǳ���� �ɸ��� �ð�(10��)
        Destroy(gameObject, lifeTime);    
    }

    void OnTriggerEnter(Collider other)
    {
        //���� Prop ������Ʈ���� Collider�� �����ؼ�
        //Ư�� ���̾ ���� Collider�� ȿ�� ����
        Collider[] colliders = Physics.OverlapSphere(transform.position,
            explosionRadius, whatIsProp);

        //���� �ݰ濡 �ִ� Prop ������Ʈ�� Collider ������ŭ
        //for�� �����
        for(int i = 0; i < colliders.Length; i++)
        {
            //���߷� ���� ���� ȿ���� �����ϱ� ����
            //Rigidbody ������Ʈ �ҷ���
            Rigidbody targetRigidbody = colliders[i].GetComponent<Rigidbody>();

            //Ư�� ������Ʈ�� ������ ������ �޾�
            //�󸶸�ŭ�� ������ ��ŭ ���ư����� �����ִ� �޼���
            targetRigidbody.AddExplosionForce(explosionForce,transform.position,
                explosionRadius);

            //Prop ������Ʈ�� �������� ��
            Prop targetProp = colliders[i].GetComponent<Prop>();
            float mDamage = CalculateDamage(colliders[i].transform.position);
            targetProp.TakeDamage(mDamage);
        }


        //�ڽĿ�����Ʈ�� SmallExplosionEffect��
        //�θ������Ʈ�� Ball�� �ٴڿ� ������ �����԰� ���ÿ�
        //�θ�, �ڽ� ���谡 �����ǰ� ������ ������Ʈ�� �����
        explosionParticle.transform.parent = null;

        explosionParticle.Play();
        explosionAudio.Play();

        //Ball�� �ٴ� ������Ʈ�� ��� �ı��Ǵ� ����
        //GameManager�� bIsRoundActive ������ false ������ ���Ͽ�
        //�ڷ�ƾ ���ѷ����� Ż���Ͽ� EndPhase�� ������
        GameManager.instance.OnBallDestroy ();

        //�޸� ���� ������ ���� SmallExplosionEffect��
        //���� �ð��� ������ �ı���
        Destroy(explosionParticle.gameObject, explosionParticle.main.duration);

        //Ball�� �ٴڿ� �ε������� �����
        Destroy(gameObject);
    }

    //���� �������� �󸶳� ������ �ִ����� ����
    //Prop������Ʈ�� ������ ����� ���� �����ϴ� �޼���
    float CalculateDamage(Vector3 targetPosition)
    {
        Vector3 explosionToTargaet = targetPosition - transform.position;

        //Prop ������Ʈ�� �������� ������ �Ÿ� ���� �� ��ȯó��
        float mDistance = explosionToTargaet.magnitude;

        //���� �ݰ� �����ڸ����� Prop ������Ʈ���� �Ÿ��� ������
        //���ϴ� �ڵ�
        float mEdgeToCenterDistance = explosionRadius - mDistance;

        //���� ������ �Ÿ� ���̷� ���� ������ ���
        float mPercentage = mEdgeToCenterDistance / explosionRadius;
        float mDamage = maxDamage * mPercentage;

        //Prop ������Ʈ�� ���� Collider�� ũ��� ���� ���� �ݰ���
        //����� percentage ���� ������ ������ �Ǹ�
        //���� damage ���� 0���� ó����
        mDamage = Mathf.Max(0, mDamage);

        return mDamage;
    }
}
