#include <iostream>
#include <stdio.h>

using namespace std;


int main() {
	
	int num_1 = 111;
	int* p = &num_1;

	int& ref1 = *p;
	int* (&ref2) = p;

	printf("%d\n", &ref1); //ref1�� �ּҰ�(������)//&ref1�� �ּҰ�=���� num_1�� �ּҰ�
	printf("%d\n", ref2);//ref2�� ����Ű�� �ּҰ�(���� ������)//&ref2=���� num_1�� �ּҰ� 
	printf("%d\n", p);//p�� ����Ű�� �ּҰ�//p=���� num_1�� �ּҰ�
	printf("%d\n", &num_1);//num_1�� �ּҰ�//*p=p�� ����Ű�� �ּҿ� ����ִ� ������
	printf("%d\n", &ref2);//ref2�� �ּҰ�//*(ref2)=&ref2�� ����Ű�� �ּҿ� ����ִ� ������
	

	return 0;
}