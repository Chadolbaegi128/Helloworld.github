using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Prop : MonoBehaviour
{
    //Prop ������Ʈ�� �ı��� ������
    //5���� ������ ����
    public int score = 5;

    //Prop ������Ʈ�� �ı��� ������
    //���������� ������� Particle ȿ����
    //�ҷ���
    public ParticleSystem explosionParticle;

    //Prop ������Ʈ�� ü��
    public float hp = 10f;

    //�ܺο��� �������� �ָ� 
    //������ ��� �� �ڱ��ڽ��� �ı���Ű�� �޼���
    public void TakeDamage (float damage)
    {
        //hp = hp - damage;
        hp -= damage;

        if (hp <= 0)
        {
            //Prop ������Ʈ�� ü���� 0�� �Ǹ�
            //Particle ȿ���� �����ϴ� �ڵ�
            ParticleSystem instance = Instantiate (explosionParticle,transform.position,
                transform.rotation);

            AudioSource explosionAudio = instance.GetComponent<AudioSource> ();

            //AudioSource.Play() �޼��尡 null���� �����ϱ� ������
            //"ArgumentNullException" ������ �߻��� ���
            //if("AudioSource Ŭ���� �ν��Ͻ���" != null)�� �̿���
            //�ذ��ؾ� �Ѵ�.
            if (explosionAudio != null)
            {
                explosionAudio.Play ();
            }

            //Prop�� �ı��Ǳ� ���� GameManager AddScore �޼��忡
            //������ �߰�����
            GameManager.instance.AddScore(score);

            //�ı����� �ʴ� Prop ������Ʈ��
            //�����ð��� ���� �� �ڵ� �ı���
            Destroy (instance.gameObject, instance.main.duration);

            //�޸� �ڿ��� ȿ�������� ����ϸ鼭
            //���ÿ� Prop ������Ʈ�� ���ֱ� ����
            // On,Off ������� ���ӿ�����Ʈ�� ������
            gameObject.SetActive (false);
        }
        
       
    }

    
}
