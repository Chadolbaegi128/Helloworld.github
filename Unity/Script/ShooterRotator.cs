using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShooterRotator : MonoBehaviour
{
    // 포신을 수평,수직 방향으로 회전하게 만드는 스크립트

    // 포신의 현재 상태 묶음을 enum타입 변수 집합으로 작성
   enum ERotateState
    {
        Idle,
        Vertical,
        Horizontal,
        Ready
    }

    // Idle = 처음 게임 시작되었을 때 상태(대기 상태)
    // Vertical = 포신이 수직방향으로 회전
    // Horizontal = 포신이 수평방향으로 회전
    // Ready = 회전이 끝나서 포탄을 쏠 준비를 끝마침

    // 게임이 시작됐을 때 포신 오브젝트의 상태 설정
    ERotateState state = ERotateState.Idle;
    public float verticalRotateSpeed = 360f;
    public float horizontalRotateSpeed = 360f;

    // Slider 활성화, 비활성화 설정
    public BallShooter ballShooter;
    
    void Update ()
    {
        
        switch (state)
        {
            case ERotateState.Idle:
                // 대기 상태에서 발사버튼을 눌렀을 때 행동 설정
                if (Input.GetButtonDown("Fire1"))
                {
                    state = ERotateState.Horizontal;
                }
                break;

            case ERotateState.Horizontal:
                // 수평방향으로 회전할 때 발사버튼을 오래 누르고 난 후 행동 설정
                if (Input.GetButton ("Fire1"))
                {
                    // Vector3 값에 Time.deltaTime을 곱해줘야지 일정 속도로 회전하게 된다.
                    transform.Rotate (new Vector3(0, horizontalRotateSpeed
                        * Time.deltaTime, 0));
                }
                else if (Input.GetButtonUp ("Fire1"))
                {
                    // 수평방향으로 회전하다가 발사버튼을 때면 수직방향으로
                    // 회전하게 된다.
                    state = ERotateState.Vertical;
                }
                break;

            case ERotateState.Vertical:
                if (Input.GetButton ("Fire1"))
                {
                    // Rotate 회전값에 x축 값을 음수로 한 이유는
                    // 양수로 만들면 앞으로 넘어지고
                    // 음수로 정하면 뒤로 넘어지는 효과가 나타난다.
                    transform.Rotate(new Vector3(-verticalRotateSpeed
                        * Time.deltaTime, 0, 0));
                }
                else if (Input.GetButtonUp ("Fire1"))
                {
                    state = ERotateState.Ready;

                    // 포신이 준비가 되면 Slider를 활성화 시킴
                    ballShooter.enabled = true;
                }
                break;

            case ERotateState.Ready:
                break;

            default:
                Debug.Assert (false, "확인할 수 없는 명령");
                break;
        }
             
    }

    void OnEnable ()
    {
        //회전축이 작동할때 마다 각도, 상태를
        //초기화하고 Slider를 비활성화시킨다.
        //Quaternion.identity = 모든 회전값을 0으로 통일함
        transform.rotation = Quaternion.identity;
        state = ERotateState.Idle;
        ballShooter.enabled = false;    
    }


}
