using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;

public class GameManager : MonoBehaviour
{
     //특정 이벤트가 발생할 때 객체에
    //등록된 이벤트들이 자동 발동됨
    public UnityEvent onReset;   

    //싱글턴 패턴을 이용해 GameManager 스크립트 관리
    public static GameManager instance;

    //게임 시작 전, 게임이 끝난 후 대기 상태일 때 띄워줄 패널 오브젝트
    public GameObject readyPannel;

    //패널에 있는 Text 오브젝트 불러오기
    public Text scoreText;
    public Text bestScoreText;
    public Text messageText;

    //게임이 시작되서 실행중인지 아닌지 표시하는 변수
    //실행되면 true, 꺼져있거나 대기 상태일 경우 false
    public bool bIsRoundActive = false;
    
    //페이즈에 따른 ShooterRotator 관리
    public ShooterRotator shooterRotator;

    //카메라 오브젝트 관리
    public CamFollow cam;

    //게임 점수 관리
    int mScore = 0;

    void Awake ()
    {
        instance = this;

        //게임이 시작할 때 UI 초기화
        //최고 점수가 저장되어있을 경우 점수도 불러옴
        UpdateUI();
    }

    void Start()
    {
        StartCoroutine("IRoundRoutine");    
    }

    //외부에서 GameManager를 통해 AddScore 메서드에 점수를 추가해줌
    public void AddScore (int newScore)
    {
        mScore += newScore;
        UpdateBestScore ();
        UpdateUI ();
    }

    //Ball이 폭발할 때 End Phase로 넘어가는 것을 알려주는 메서드
    public void OnBallDestroy ()
    {
        UpdateUI ();
        bIsRoundActive = false;
        
    }

    public void Reset ()
    {
        mScore = 0;
        UpdateUI ();

        //라운드를 다시 처음부터 시작
        StartCoroutine ("IRoundRoutine");
    }

    //페이즈마다 수행할 명령 입력
    IEnumerator IRoundRoutine ()
    {
        onReset.Invoke ();

        // Ready 페이즈
        readyPannel.SetActive (true);
        cam.SetTarget (shooterRotator.transform, CamFollow.EState.Idle);

        //대기 상태일때 ShooterRotator가 조작되지 않도록 비활성화
        shooterRotator.enabled = false;

        //대기 상태
        bIsRoundActive = false;

        //대기 중 UI 텍스트 출력
        messageText.text = "Ready...";

        yield return new WaitForSeconds (3f);

        // Play 페이즈(무한루프 사용)
        shooterRotator.enabled = true;
        bIsRoundActive = true;
        readyPannel.SetActive (false);        

        cam.SetTarget(shooterRotator.transform, CamFollow.EState.Ready);

        while (bIsRoundActive == true)
        {
            yield return null;
        }

        // End 페이즈
        shooterRotator.enabled = false;
        readyPannel.SetActive(true);
        
        //UI Text 출력
        messageText.text = "Wait For Next Round...";

        yield return new WaitForSeconds(3f);

        Reset ();

    }

    //현재 점수가 PlayerPrefs에 저장된 점수들보다 높을 경우
    //최고 점수로 업데이트 하고 최고 점수가 없으면
    //PlayerPrefs에 최고 점수를 생성해주는 메서드
    void UpdateBestScore ()
    {
        //PlayerPrefs에 저장된 점수가
        //현재 점수보다 낮으면
        //현재 점수를 "BestScore"로 저장한다.
        if (GetBestScore () < mScore)
        {
            PlayerPrefs.SetInt ("BestScore", mScore);
        }
        
    }

    //PlayerPrefs에 저장된 최고 점수를 불러옴
    //최고 점수가 없다면 Value 값으로 0이 들어옴
    int GetBestScore ()
    {
        int mBestScore = PlayerPrefs.GetInt ("BestScore");
        return mBestScore;
    }

    //UI 업데이트
    void UpdateUI()
    {
        scoreText.text = "Score: " + mScore;
        bestScoreText.text = "Best Score: " + GetBestScore ();
    }

    
}
