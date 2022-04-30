using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnGenerator : MonoBehaviour
{
    //�ҷ��� ���ӵ�(������ ����)
    public GameObject[] propPrefabs;

    //�ʱ� ���� ���� ����
    public int count = 100;

    //Collider ���� ��������(���� ���ӵ��� �����Ǵ� ����)
    BoxCollider mArea;

    //�� ���帶�� �缳���� ���� ���
    List<GameObject> mProps = new List<GameObject> ();

    // Start is called before the first frame update
    void Start ()
    {
        mArea = GetComponent<BoxCollider> ();

        for (int i=0; i < count; i++)
        {
            //������ �޼���
            //�ʱ� ������ count ����� ���� ����
            Spawn ();
        }

        //���Ӱ� Collider�� �浹�� �����ϱ� ���� ���� ���� ��
        //Collider ������Ʈ ��Ȱ��ȭ
        mArea.enabled = false;
    }

    //Spawn �޼��尡 ������ ������
    //GetRandomPosition ����3 �޼��尡 ���� ������Ʈ�� ������ ��ġ�� ������Ŵ
    void Spawn ()
    {
        //Random.Range �޼��忡 �Ű������� int�� ���� ���������
        //������ ���� ��ȯ�ȴ�(������ ���� ������ŭ �迭 ����)
        int mSelection = Random.Range (0, propPrefabs.Length);

        //Ư�� ������ ������ ���� ���
        GameObject mSelectedPrefab = propPrefabs[mSelection];

        //Ư�� ������ ������ ���� ��ġ ����
        Vector3 mSpawnPos = GetRandomPosition ();

        //���� ����(����, ��ġ, ���ʹϾ� ȸ����-�⺻ ȸ����)
        //���帶�� ���� ��ġ �缳��
        GameObject mInstance = Instantiate (mSelectedPrefab, mSpawnPos, Quaternion.identity);
        mProps.Add (mInstance);
    }
    Vector3 GetRandomPosition ()
    {
        //Ball�� �����Ǵ� ��ġ
        Vector3 mBasePosition = transform.position;

        //size: Box Collider�� ũ��
        Vector3 mSize = mArea.size;

        //Ball ��ġ�� �������� Box Collider�� �¿�� ���� ������ ������ �� ����
        float mPosX = mBasePosition.x + Random.Range (-mSize.x / 2f, mSize.x / 2f);
        float mPosY = mBasePosition.y + Random.Range (-mSize.y / 2f, mSize.y / 2f);
        float mPosZ = mBasePosition.z + Random.Range (-mSize.z / 2f, mSize.z / 2f);

        //Prop�� ������ ������ ��ġ ��ǥ ���� �� ��ȯ
        Vector3 mSpawnPos = new Vector3 (mPosX, mPosY, mPosZ);

        return mSpawnPos;
    }

    //����� ���� �� ���ӵ��� ��ġ�� �������ϴ� �޼���
    public void Reset ()
    {
        for (int i = 0; i < mProps.Count; i++)
        {
            mProps[i].transform.position = GetRandomPosition ();
            mProps[i].SetActive (true);
        }
    }
}
