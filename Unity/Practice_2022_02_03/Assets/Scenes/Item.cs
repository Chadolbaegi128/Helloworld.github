using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Item : MonoBehaviour
{
    [SerializeField] float rotSpeed;
    // Update is called once per frame
    void Update()
    {
        transform.Rotate(Vector3.down * rotSpeed * Time.deltaTime, Space.World); ;
        //컴퓨터 사양에 상관없이 움직임 수치는 동일해야하기
        //때문에 deltatime을 집어넣는다.
    }
}
