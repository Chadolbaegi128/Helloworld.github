using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerBall : MonoBehaviour
{
    Rigidbody Game;
    [SerializeField] private float jumpPower;
    bool isJumping;
    
    void Awake()
    {
        //게임을 시작할 때 공이 튀어오르면 안되기 때문에
        //'isJumping' 변수를 false로 초기화
        isJumping = false;
        Game = GetComponent<Rigidbody>();
    }

  

    void Update()
    {
        
        //현재 isJumping의 값이 false여서 if문 괄호의
        //'!isJumping' 조건과 GetButtonDown의 조건이 참이므로
        //'isJumping'의 값이 true로 바뀌어서 점프가 가능하게 된 것이다.
        //허나 아래 OnCollisionEnter 함수처럼
        //'isJumping'의 값을 다시 바꾸지 않으면
        //Update 함수가 매 프레임마다 호출되는 특징때문에
        //'isJumping'의 값과 if문의 조건이 맞지 않아
        //두 번째 프레임때 if문이 실행되지 않게 된다.
        //그래서 두 번 다시 오브젝트가 점프를 할 수 없는
        //상태가 되는 것이다.
        if (Input.GetButtonDown("Jump") && !isJumping)
        {
            isJumping = true;
            Game.AddForce(new Vector3(0, jumpPower, 0), ForceMode.Impulse);
        }   
    }

    //물리기반 게임을 구현하는 것이라 FixedUpdate가 필요함
    void FixedUpdate()
    {
        float h = Input.GetAxisRaw("Horizontal");
        float v = Input.GetAxisRaw("Vertical");
        Game.AddForce(new Vector3(h, 0, v), ForceMode.Impulse);
        
    }

    void OnCollisionEnter(Collision collision)
    {
        //위에서 Update 함수를 통해 변한 'isJumping'의 변수를
        //다시 변하도록 만들어서 매 프레임마다 Update 함수내 if문이
        //실행될 수 있도록 만든다.
        if (collision.gameObject.name == "Floor")
        {
            isJumping = false;
        }
        
    }
}
