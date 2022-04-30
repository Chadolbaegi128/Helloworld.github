using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShooterRotator : MonoBehaviour
{
    // ������ ����,���� �������� ȸ���ϰ� ����� ��ũ��Ʈ

    // ������ ���� ���� ������ enumŸ�� ���� �������� �ۼ�
   enum ERotateState
    {
        Idle,
        Vertical,
        Horizontal,
        Ready
    }

    // Idle = ó�� ���� ���۵Ǿ��� �� ����(��� ����)
    // Vertical = ������ ������������ ȸ��
    // Horizontal = ������ ����������� ȸ��
    // Ready = ȸ���� ������ ��ź�� �� �غ� ����ħ

    // ������ ���۵��� �� ���� ������Ʈ�� ���� ����
    ERotateState state = ERotateState.Idle;
    public float verticalRotateSpeed = 360f;
    public float horizontalRotateSpeed = 360f;

    // Slider Ȱ��ȭ, ��Ȱ��ȭ ����
    public BallShooter ballShooter;
    
    void Update ()
    {
        
        switch (state)
        {
            case ERotateState.Idle:
                // ��� ���¿��� �߻��ư�� ������ �� �ൿ ����
                if (Input.GetButtonDown("Fire1"))
                {
                    state = ERotateState.Horizontal;
                }
                break;

            case ERotateState.Horizontal:
                // ����������� ȸ���� �� �߻��ư�� ���� ������ �� �� �ൿ ����
                if (Input.GetButton ("Fire1"))
                {
                    // Vector3 ���� Time.deltaTime�� ��������� ���� �ӵ��� ȸ���ϰ� �ȴ�.
                    transform.Rotate (new Vector3(0, horizontalRotateSpeed
                        * Time.deltaTime, 0));
                }
                else if (Input.GetButtonUp ("Fire1"))
                {
                    // ����������� ȸ���ϴٰ� �߻��ư�� ���� ������������
                    // ȸ���ϰ� �ȴ�.
                    state = ERotateState.Vertical;
                }
                break;

            case ERotateState.Vertical:
                if (Input.GetButton ("Fire1"))
                {
                    // Rotate ȸ������ x�� ���� ������ �� ������
                    // ����� ����� ������ �Ѿ�����
                    // ������ ���ϸ� �ڷ� �Ѿ����� ȿ���� ��Ÿ����.
                    transform.Rotate(new Vector3(-verticalRotateSpeed
                        * Time.deltaTime, 0, 0));
                }
                else if (Input.GetButtonUp ("Fire1"))
                {
                    state = ERotateState.Ready;

                    // ������ �غ� �Ǹ� Slider�� Ȱ��ȭ ��Ŵ
                    ballShooter.enabled = true;
                }
                break;

            case ERotateState.Ready:
                break;

            default:
                Debug.Assert (false, "Ȯ���� �� ���� ���");
                break;
        }
             
    }

    void OnEnable ()
    {
        //ȸ������ �۵��Ҷ� ���� ����, ���¸�
        //�ʱ�ȭ�ϰ� Slider�� ��Ȱ��ȭ��Ų��.
        //Quaternion.identity = ��� ȸ������ 0���� ������
        transform.rotation = Quaternion.identity;
        state = ERotateState.Idle;
        ballShooter.enabled = false;    
    }


}
