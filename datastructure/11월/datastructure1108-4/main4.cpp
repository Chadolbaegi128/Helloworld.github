#include <stdio.h>
#include <stdlib.h>

//�����͸� ���������� �����Ϸ���
//�迭, ���

int factorial(int num) {//���ȣ��: � �Լ��� �ڱ� �Լ� ������ �ڱ� �ڽ��� ȣ���ϴ� ���
	if (num == 1) {//���ȣ���� �Ҷ� ������ ����� �������� ������ ���� �����÷ΰ� �߻��Ͽ�
		return 1;//���α׷��� ���� ����ȴ�.
	}//=>���ȣ���� ����Ǵ� ����(if �Լ�)

	return num * factorial(num - 1);//num!
}

int main() {

	printf("10 factorial = %d\n", factorial(10));
	return 0;
}