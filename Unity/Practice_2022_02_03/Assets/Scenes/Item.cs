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
        //��ǻ�� ��翡 ������� ������ ��ġ�� �����ؾ��ϱ�
        //������ deltatime�� ����ִ´�.
    }
}
