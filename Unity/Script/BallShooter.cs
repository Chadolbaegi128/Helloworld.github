using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BallShooter : MonoBehaviour
{
    public CamFollow cam;

    //Rigidbody를 public으로 선언해서 불러오면
    //빠르게 Ball 오브젝트의 Rigidbdoy 컴포넌트
    //효과를 줄 수 있다.
    public Rigidbody ball;

    //실제 Ball이 생성되는 위치 설정
    public Transform firePos;

    //Slider 설정
    public Slider powerSlider;

    //Shooting Pivot 소리 설정
    public AudioSource shootingSound;

    //Ball 오브젝트 발사음 설정
    //Ball 오브젝트가 발사될 때 해당 값이 AudioSource로 들어감
    public AudioClip fireClip;

    //Shooting Pivot 오브젝트의 충전음 설정
    //Ball 오브젝트를 발사 준비할 때 해당 값이 AudioSource로 들어감
    public AudioClip chargingClip;

    //Slider 최솟값
    public float minForce = 15f;

    //Slider 최댓값
    public float maxForce = 30f;

    //Slider 최대치에 도달하기까지
    //걸리는 시간
    public float chargingTime = 1f;

    //Slider 최솟값, 최댓값 사이 현재 수치
    float mCurrentForce;

    //1초에 Slider 수치가 채워지는 속도 설정 
    float mChargeSpeed;

    //Ball이 발사됐다면 다시 발사되었는지 확인
    bool mbIsFired;

    void OnEnable ()
    {
        //게임이 시작될 때마다 생성되는 Slider 수치 조정
        mCurrentForce = minForce;

        //게임을 처음 구동했을때 Slider 수치 조정
        powerSlider.value = minForce;

        //발사하지 않았으므로 false 값 지정
        mbIsFired = false;
    }

    void Start ()
    {
        //속도 = 움직인 거리/ 걸린 시간
        mChargeSpeed = (maxForce - minForce) / chargingTime;    
    }

    //!isFired는 이미 발사됐는데 추가 발사되는 상황을 막기 위한
    //안전장치
    void Update ()
    {
        powerSlider.value = minForce;

        if (mCurrentForce >= maxForce && ! mbIsFired)
        {
            //현재 충전하는 힘이 최대 힘을 능가하면
            //최대 힘으로 맞춰 준 다음 강제적으로 발사처리
            mCurrentForce = maxForce;
            FireBall ();
        }
        else if (Input.GetButtonDown ("Fire1"))
        {
            //현재 버튼을 눌렀다면
            //최소 힘부터 시작함
            mCurrentForce = minForce;

            //오디오 파일을 충전 효과음으로 바꾼 후 재생
            shootingSound.clip = chargingClip;
            shootingSound.Play ();
        }
        else if  (Input.GetButton ("Fire1") && ! mbIsFired)
        {
            //Fire1 버튼을 누르고 있는 동안
            //시간 간격(1/60초)마다 Slider 수치가 누적됨
            mCurrentForce += mChargeSpeed * Time.deltaTime;

            //버튼을 누르고 있을 때 Slider 바가 올라감
            powerSlider.value = mCurrentForce;
        }
        else if (Input.GetButtonUp ("Fire1") && ! mbIsFired)
        {
            //발사처리
            FireBall ();
        }
        
    }

    //지정된 Ball 오브젝트를 소환해서 발사 시키는 메서드
    void FireBall ()
    {
        //발사된 상태이므로 true 값
        mbIsFired = true;

        //Ball 오브젝트 생성
        Rigidbody ballInstance = Instantiate (ball,firePos.position,firePos.rotation);

        //Slider 방향으로 발사되는 공의 속력 설정
        ballInstance.velocity = mCurrentForce * firePos.forward;

        //오디오 파일을 발사 효과음으로 바꾼 후 재생
        shootingSound.clip = fireClip;
        shootingSound.Play ();

        //발사 후 Slider 수치를 최소로 설정 
        mCurrentForce = minForce;

        //Ball이 발사되고 나서 메인 카메라가 Ball을 따라가게 됨
        cam.SetTarget (ballInstance.transform, CamFollow.EState.Track);
    }
}
