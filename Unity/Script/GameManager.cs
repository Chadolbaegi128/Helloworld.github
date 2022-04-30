using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;

public class GameManager : MonoBehaviour
{
     //Ư�� �̺�Ʈ�� �߻��� �� ��ü��
    //��ϵ� �̺�Ʈ���� �ڵ� �ߵ���
    public UnityEvent onReset;   

    //�̱��� ������ �̿��� GameManager ��ũ��Ʈ ����
    public static GameManager instance;

    //���� ���� ��, ������ ���� �� ��� ������ �� ����� �г� ������Ʈ
    public GameObject readyPannel;

    //�гο� �ִ� Text ������Ʈ �ҷ�����
    public Text scoreText;
    public Text bestScoreText;
    public Text messageText;

    //������ ���۵Ǽ� ���������� �ƴ��� ǥ���ϴ� ����
    //����Ǹ� true, �����ְų� ��� ������ ��� false
    public bool bIsRoundActive = false;
    
    //����� ���� ShooterRotator ����
    public ShooterRotator shooterRotator;

    //ī�޶� ������Ʈ ����
    public CamFollow cam;

    //���� ���� ����
    int mScore = 0;

    void Awake ()
    {
        instance = this;

        //������ ������ �� UI �ʱ�ȭ
        //�ְ� ������ ����Ǿ����� ��� ������ �ҷ���
        UpdateUI();
    }

    void Start()
    {
        StartCoroutine("IRoundRoutine");    
    }

    //�ܺο��� GameManager�� ���� AddScore �޼��忡 ������ �߰�����
    public void AddScore (int newScore)
    {
        mScore += newScore;
        UpdateBestScore ();
        UpdateUI ();
    }

    //Ball�� ������ �� End Phase�� �Ѿ�� ���� �˷��ִ� �޼���
    public void OnBallDestroy ()
    {
        UpdateUI ();
        bIsRoundActive = false;
        
    }

    public void Reset ()
    {
        mScore = 0;
        UpdateUI ();

        //���带 �ٽ� ó������ ����
        StartCoroutine ("IRoundRoutine");
    }

    //������� ������ ��� �Է�
    IEnumerator IRoundRoutine ()
    {
        onReset.Invoke ();

        // Ready ������
        readyPannel.SetActive (true);
        cam.SetTarget (shooterRotator.transform, CamFollow.EState.Idle);

        //��� �����϶� ShooterRotator�� ���۵��� �ʵ��� ��Ȱ��ȭ
        shooterRotator.enabled = false;

        //��� ����
        bIsRoundActive = false;

        //��� �� UI �ؽ�Ʈ ���
        messageText.text = "Ready...";

        yield return new WaitForSeconds (3f);

        // Play ������(���ѷ��� ���)
        shooterRotator.enabled = true;
        bIsRoundActive = true;
        readyPannel.SetActive (false);        

        cam.SetTarget(shooterRotator.transform, CamFollow.EState.Ready);

        while (bIsRoundActive == true)
        {
            yield return null;
        }

        // End ������
        shooterRotator.enabled = false;
        readyPannel.SetActive(true);
        
        //UI Text ���
        messageText.text = "Wait For Next Round...";

        yield return new WaitForSeconds(3f);

        Reset ();

    }

    //���� ������ PlayerPrefs�� ����� �����麸�� ���� ���
    //�ְ� ������ ������Ʈ �ϰ� �ְ� ������ ������
    //PlayerPrefs�� �ְ� ������ �������ִ� �޼���
    void UpdateBestScore ()
    {
        //PlayerPrefs�� ����� ������
        //���� �������� ������
        //���� ������ "BestScore"�� �����Ѵ�.
        if (GetBestScore () < mScore)
        {
            PlayerPrefs.SetInt ("BestScore", mScore);
        }
        
    }

    //PlayerPrefs�� ����� �ְ� ������ �ҷ���
    //�ְ� ������ ���ٸ� Value ������ 0�� ����
    int GetBestScore ()
    {
        int mBestScore = PlayerPrefs.GetInt ("BestScore");
        return mBestScore;
    }

    //UI ������Ʈ
    void UpdateUI()
    {
        scoreText.text = "Score: " + mScore;
        bestScoreText.text = "Best Score: " + GetBestScore ();
    }

    
}
