using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BallShooter : MonoBehaviour
{
    public CamFollow cam;

    //Rigidbody�� public���� �����ؼ� �ҷ�����
    //������ Ball ������Ʈ�� Rigidbdoy ������Ʈ
    //ȿ���� �� �� �ִ�.
    public Rigidbody ball;

    //���� Ball�� �����Ǵ� ��ġ ����
    public Transform firePos;

    //Slider ����
    public Slider powerSlider;

    //Shooting Pivot �Ҹ� ����
    public AudioSource shootingSound;

    //Ball ������Ʈ �߻��� ����
    //Ball ������Ʈ�� �߻�� �� �ش� ���� AudioSource�� ��
    public AudioClip fireClip;

    //Shooting Pivot ������Ʈ�� ������ ����
    //Ball ������Ʈ�� �߻� �غ��� �� �ش� ���� AudioSource�� ��
    public AudioClip chargingClip;

    //Slider �ּڰ�
    public float minForce = 15f;

    //Slider �ִ�
    public float maxForce = 30f;

    //Slider �ִ�ġ�� �����ϱ����
    //�ɸ��� �ð�
    public float chargingTime = 1f;

    //Slider �ּڰ�, �ִ� ���� ���� ��ġ
    float mCurrentForce;

    //1�ʿ� Slider ��ġ�� ä������ �ӵ� ���� 
    float mChargeSpeed;

    //Ball�� �߻�ƴٸ� �ٽ� �߻�Ǿ����� Ȯ��
    bool mbIsFired;

    void OnEnable ()
    {
        //������ ���۵� ������ �����Ǵ� Slider ��ġ ����
        mCurrentForce = minForce;

        //������ ó�� ���������� Slider ��ġ ����
        powerSlider.value = minForce;

        //�߻����� �ʾ����Ƿ� false �� ����
        mbIsFired = false;
    }

    void Start ()
    {
        //�ӵ� = ������ �Ÿ�/ �ɸ� �ð�
        mChargeSpeed = (maxForce - minForce) / chargingTime;    
    }

    //!isFired�� �̹� �߻�ƴµ� �߰� �߻�Ǵ� ��Ȳ�� ���� ����
    //������ġ
    void Update ()
    {
        powerSlider.value = minForce;

        if (mCurrentForce >= maxForce && ! mbIsFired)
        {
            //���� �����ϴ� ���� �ִ� ���� �ɰ��ϸ�
            //�ִ� ������ ���� �� ���� ���������� �߻�ó��
            mCurrentForce = maxForce;
            FireBall ();
        }
        else if (Input.GetButtonDown ("Fire1"))
        {
            //���� ��ư�� �����ٸ�
            //�ּ� ������ ������
            mCurrentForce = minForce;

            //����� ������ ���� ȿ�������� �ٲ� �� ���
            shootingSound.clip = chargingClip;
            shootingSound.Play ();
        }
        else if  (Input.GetButton ("Fire1") && ! mbIsFired)
        {
            //Fire1 ��ư�� ������ �ִ� ����
            //�ð� ����(1/60��)���� Slider ��ġ�� ������
            mCurrentForce += mChargeSpeed * Time.deltaTime;

            //��ư�� ������ ���� �� Slider �ٰ� �ö�
            powerSlider.value = mCurrentForce;
        }
        else if (Input.GetButtonUp ("Fire1") && ! mbIsFired)
        {
            //�߻�ó��
            FireBall ();
        }
        
    }

    //������ Ball ������Ʈ�� ��ȯ�ؼ� �߻� ��Ű�� �޼���
    void FireBall ()
    {
        //�߻�� �����̹Ƿ� true ��
        mbIsFired = true;

        //Ball ������Ʈ ����
        Rigidbody ballInstance = Instantiate (ball,firePos.position,firePos.rotation);

        //Slider �������� �߻�Ǵ� ���� �ӷ� ����
        ballInstance.velocity = mCurrentForce * firePos.forward;

        //����� ������ �߻� ȿ�������� �ٲ� �� ���
        shootingSound.clip = fireClip;
        shootingSound.Play ();

        //�߻� �� Slider ��ġ�� �ּҷ� ���� 
        mCurrentForce = minForce;

        //Ball�� �߻�ǰ� ���� ���� ī�޶� Ball�� ���󰡰� ��
        cam.SetTarget (ballInstance.transform, CamFollow.EState.Track);
    }
}
