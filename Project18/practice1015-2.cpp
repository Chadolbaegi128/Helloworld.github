#include <iostream>
#include <string>

using namespace std;

int global = 0;//�ܺκ���(��������)

int main() {

	//����
	//���ٹ���, ���ӱⰣ

	int a = 20;//���ú���
	{
		int a; //���ú���, �ڵ�����
		static int b = 0; //���ú���, ��������
	}


	return 0;
}