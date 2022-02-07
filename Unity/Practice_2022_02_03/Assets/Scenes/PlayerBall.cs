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
        //������ ������ �� ���� Ƣ������� �ȵǱ� ������
        //'isJumping' ������ false�� �ʱ�ȭ
        isJumping = false;
        Game = GetComponent<Rigidbody>();
    }

  

    void Update()
    {
        
        //���� isJumping�� ���� false���� if�� ��ȣ��
        //'!isJumping' ���ǰ� GetButtonDown�� ������ ���̹Ƿ�
        //'isJumping'�� ���� true�� �ٲ� ������ �����ϰ� �� ���̴�.
        //�㳪 �Ʒ� OnCollisionEnter �Լ�ó��
        //'isJumping'�� ���� �ٽ� �ٲ��� ������
        //Update �Լ��� �� �����Ӹ��� ȣ��Ǵ� Ư¡������
        //'isJumping'�� ���� if���� ������ ���� �ʾ�
        //�� ��° �����Ӷ� if���� ������� �ʰ� �ȴ�.
        //�׷��� �� �� �ٽ� ������Ʈ�� ������ �� �� ����
        //���°� �Ǵ� ���̴�.
        if (Input.GetButtonDown("Jump") && !isJumping)
        {
            isJumping = true;
            Game.AddForce(new Vector3(0, jumpPower, 0), ForceMode.Impulse);
        }   
    }

    //������� ������ �����ϴ� ���̶� FixedUpdate�� �ʿ���
    void FixedUpdate()
    {
        float h = Input.GetAxisRaw("Horizontal");
        float v = Input.GetAxisRaw("Vertical");
        Game.AddForce(new Vector3(h, 0, v), ForceMode.Impulse);
        
    }

    void OnCollisionEnter(Collision collision)
    {
        //������ Update �Լ��� ���� ���� 'isJumping'�� ������
        //�ٽ� ���ϵ��� ���� �� �����Ӹ��� Update �Լ��� if����
        //����� �� �ֵ��� �����.
        if (collision.gameObject.name == "Floor")
        {
            isJumping = false;
        }
        
    }
}
