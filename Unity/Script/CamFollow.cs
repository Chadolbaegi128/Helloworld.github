using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CamFollow : MonoBehaviour
{
    //���ϴ� ���ӿ�����Ʈ ����
    //���� ���
    //��ź �߻� �� ���
    //�߻� �� ��ź ����(����, �ܾƿ�)

    public enum EState
    {
        Idle,
        Ready,
        Track
    }

    //������Ƽ ����
    //�ܰ��� �������� �۵������ �޼���
    EState State
    {
        //���� ���� ������Ƽ->���� ���� ������Ƽ�� �� ����
        //�ݵ�� �޼��带 ����ϴ� ������ ������Ƽ�� �����ϴ�
        //�޼��带 �ۼ��ؾ� �Ѵ�.
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
                    Debug.Assert(false, "Ȯ���� �� ���� ���");
                    break;
            }
        }
    }

    //���� ��ġ���� ���ϴ� ��ġ���� 0.2���� �ð����� �ε巴��
    //���ϱ� ���� ����
    public float smoothTime = 0.2f;

    //���� ��ġ���� ���ϴ� ��ġ���� ������ �����ӿ� ��� �ӵ���
    //�̵��ϴ��� ��Ÿ���� ���Ͱ�
    Vector3 mLastMovingVelocity;

    //���ϴ� ��ġ�� ���Ͱ�
    Vector3 mTargetPosition;

    //Camera ������Ʈ ����
    Camera mCam;

    //Camera �� ������ ����
    float mTargetZoomSize = 5f;

    //Ư�� ��Ȳ�� �� ������� const Ű����� ������Ŵ(���� ����� ���� �߻�)
    //���� ��� ������ �� �� ������
    const float mRoundReadyZoomSize = 14.5f;

    //��ź ��� ���� �� �� ������
    const float mReadyShotZoomSize = 5f;

    //��ź �߻� �� �� ������
    const float mTrackingZoomSize = 10f;

    //������ ������ �� �ӵ�
    float mLastZoomSpeed;

    //������ Ÿ�� ����
    Transform mTarget;

    void Awake ()
    {
        //�� ��ũ��Ʈ�� �ִ� ������Ʈ�� �ڽ� ������Ʈ����
        //������Ʈ�� ������
        mCam = GetComponentInChildren<Camera> ();

        //������Ƽ�� set �����ڸ� ���� �� ����
        State = EState.Idle;
    }

    //������ ������ ����� �޼��� ����
    void FixedUpdate ()
    {
        //��ǥ�� �ִٸ�
        if (mTarget != null)
        {
            Move ();
            Zoom ();
        }
    }

    //�Ű������� ���� ��ǥ�� ���� ����
    public void SetTarget (Transform newTarget, EState newState)
    {
        mTarget = newTarget;
        State = newState;
    }

    //ī�޶� ���ϴ� ������Ʈ�� ���� �����̵��� �ϴ� �޼���
    void Move ()
    {
        mTargetPosition = mTarget.transform.position;

        Vector3 mSmoothPosition = Vector3.SmoothDamp (transform.position, mTargetPosition,
            ref mLastMovingVelocity, smoothTime);

        transform.position = mSmoothPosition;
    }

    //ī�޶� �� ����� ���� �ð��� �༭ �ٲ��ִ� �޼���
    void Zoom ()
    {
        float mSmoothZoomSize = Mathf.SmoothDamp (mCam.orthographicSize, mTargetZoomSize,
            ref mLastZoomSpeed, smoothTime);

        mCam.orthographicSize = mSmoothZoomSize;
    }

    //�� ���帶�� �ʱ� �������� ����� �ִ� �̺�Ʈ �޼���
    public void Reset ()
    {
        State = EState.Idle;
    }


}
