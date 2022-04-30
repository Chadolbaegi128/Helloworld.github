using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnGenerator : MonoBehaviour
{
    //불러올 프롭들(프리팹 형태)
    public GameObject[] propPrefabs;

    //초기 프롭 갯수 설정
    public int count = 100;

    //Collider 범위 가져오기(여러 프롭들이 생성되는 범위)
    BoxCollider mArea;

    //매 라운드마다 재설정할 프롭 목록
    List<GameObject> mProps = new List<GameObject> ();

    // Start is called before the first frame update
    void Start ()
    {
        mArea = GetComponent<BoxCollider> ();

        for (int i=0; i < count; i++)
        {
            //생성용 메서드
            //초기 설정된 count 값대로 프롭 생성
            Spawn ();
        }

        //프롭과 Collider의 충돌을 방지하기 위해 프롭 생성 후
        //Collider 컴포넌트 비활성화
        mArea.enabled = false;
    }

    //Spawn 메서드가 구현될 때마다
    //GetRandomPosition 벡터3 메서드가 프롭 오브젝트를 무작위 위치에 생성시킴
    void Spawn ()
    {
        //Random.Range 메서드에 매개변수로 int형 값을 집어넣으면
        //정수형 값이 반환된다(생성할 프롭 갯수만큼 배열 생성)
        int mSelection = Random.Range (0, propPrefabs.Length);

        //특정 순번에 생성할 프롭 등록
        GameObject mSelectedPrefab = propPrefabs[mSelection];

        //특정 순번에 생성할 프롭 위치 설정
        Vector3 mSpawnPos = GetRandomPosition ();

        //프롭 생성(순번, 위치, 쿼터니언 회전값-기본 회전값)
        //라운드마다 프롭 위치 재설정
        GameObject mInstance = Instantiate (mSelectedPrefab, mSpawnPos, Quaternion.identity);
        mProps.Add (mInstance);
    }
    Vector3 GetRandomPosition ()
    {
        //Ball이 생성되는 위치
        Vector3 mBasePosition = transform.position;

        //size: Box Collider의 크기
        Vector3 mSize = mArea.size;

        //Ball 위치를 기준으로 Box Collider내 좌우로 절반 범위에 무작위 값 설정
        float mPosX = mBasePosition.x + Random.Range (-mSize.x / 2f, mSize.x / 2f);
        float mPosY = mBasePosition.y + Random.Range (-mSize.y / 2f, mSize.y / 2f);
        float mPosZ = mBasePosition.z + Random.Range (-mSize.z / 2f, mSize.z / 2f);

        //Prop이 생성될 무작위 위치 좌표 생성 및 반환
        Vector3 mSpawnPos = new Vector3 (mPosX, mPosY, mPosZ);

        return mSpawnPos;
    }

    //재시작 했을 때 프롭들의 위치를 재조정하는 메서드
    public void Reset ()
    {
        for (int i = 0; i < mProps.Count; i++)
        {
            mProps[i].transform.position = GetRandomPosition ();
            mProps[i].SetActive (true);
        }
    }
}
