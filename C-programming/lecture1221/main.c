#include <stdio.h>
int global = 10;

//�ڵ������� �� �� ����ϸ� �ȵǴ� ����
void func3(int value) {
	int a;
	a = value;
}

void func2(int value) {
	int a;
	a = value;
	func3(value);
}

int* func(int value) {
	int a;
	a = value;

	func2(value);

	int b = 100;

	return&a;
}

int main() {//���α׷��� ������

	int a = 20;//�ڵ�����
	int* pfunca = func(a);//�ڵ������� �ּҰ��� �ܺη� �����ؼ� ����Ͻø�
	//�ȵ˴ϴ�.

	printf("func a = %d\n", *(pfunca));
	//�ڵ������� �ּҰ��� �ܺη� �������� �� ���ϴ� ����
	//������ ���� ���ɼ��� ����

	return 0;
}