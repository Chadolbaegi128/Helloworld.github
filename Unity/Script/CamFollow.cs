using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CamFollow : MonoBehaviour
{
    //원하는 게임오브젝트 추적
    //라운드 대기
    //포탄 발사 전 대기
    //발사 후 포탄 추적(줌인, 줌아웃)

    public enum EState
    {
        Idle,
        Ready,
        Track
    }

    //프로퍼티 선언
    //외관은 변수지만 작동방식은 메서드
    EState State
    {
        //쓰기 전용 프로퍼티->쓰기 전용 프로퍼티를 쓸 때는
        //반드시 메서드를 출력하는 영역에 프로퍼티를 구현하는
        //메서드를 작성해야 한다.
        set
        {
            switch (value)
            {
                case EState.Idle:
                    mTargetZoomSize = mRoundReadyZoomSize;
                    break;
                case EState.Ready:
                    mTargetZoomSize = mReadyShotZoomSize;
                    break;
                case EState.Track:
                    mTargetZoomSize = mTrackingZoomSize;
                    break;
                default:
                    Debug.Assert(false, "확인할 수 없는 명령");
                    break;
            }
        }
    }

    //현재 위치에서 원하는 위치까지 0.2초의 시간동안 부드럽게
    //줌하기 위한 변수
    public float smoothTime = 0.2f;

    //현재 위치에서 원하는 위치까지 마지막 프레임에 어느 속도로
    //이동하는지 나타내는 벡터값
    Vector3 mLastMovingVelocity;

    //원하는 위치의 벡터값
    Vector3 mTargetPosition;

    //Camera 컴포넌트 선언
    Camera mCam;

    //Camera 줌 사이즈 설정
    float mTargetZoomSize = 5f;

    //특정 상황의 줌 사이즈는 const 키워드로 고정시킴(덮어 씌우면 오류 발생)
    //라운드 대기 상태일 때 줌 사이즈
    const float mRoundReadyZoomSize = 14.5f;

    //포탄 대기 중일 때 줌 사이즈
    const float mReadyShotZoomSize = 5f;

    //포탄 발사 후 줌 사이즈
    const float mTrackingZoomSize = 10f;

    //마지막 순간의 줌 속도
    float mLastZoomSpeed;

    //추적할 타겟 선언
    Transform mTarget;

    void Awake ()
    {
        //이 스크립트가 있는 오브젝트의 자식 오브젝트에서
        //컴포넌트를 가져옴
        mCam = GetComponentInChildren<Camera> ();

        //프로퍼티의 set 접근자를 통한 값 지정
        State = EState.Idle;
    }

    //정해진 프레임 수대로 메서드 실행
    void FixedUpdate ()
    {
        //목표가 있다면
        if (mTarget != null)
        {
            Move ();
            Zoom ();
        }
    }

    //매개변수를 통해 목표와 상태 설정
    public void SetTarget (Transform newTarget, EState newState)
    {
        mTarget = newTarget;
        State = newState;
    }

    //카메라가 원하는 오브젝트에 맞춰 움직이도록 하는 메서드
    void Move ()
    {
        mTargetPosition = mTarget.transform.position;

        Vector3 mSmoothPosition = Vector3.SmoothDamp (transform.position, mTargetPosition,
            ref mLastMovingVelocity, smoothTime);

        transform.position = mSmoothPosition;
    }

    //카메라 줌 사이즈를 지연 시간을 줘서 바꿔주는 메서드
    void Zoom ()
    {
        float mSmoothZoomSize = Mathf.SmoothDamp (mCam.orthographicSize, mTargetZoomSize,
            ref mLastZoomSpeed, smoothTime);

        mCam.orthographicSize = mSmoothZoomSize;
    }

    //매 라운드마다 초기 설정으로 만들어 주는 이벤트 메서드
    public void Reset ()
    {
        State = EState.Idle;
    }


}
