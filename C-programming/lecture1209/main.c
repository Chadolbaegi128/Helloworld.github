#include <stdio.h>

int main() {
	int a = 100;

	a = a << 2;//�������� 1��Ʈ �δٴ� ���� *(���ϱ�)2 �Ѱſ� ����.
	printf("a = %d\n", a);

	a = a << 2;
	printf("a = %d\n", a);

	a = a >> 2;//���������� 1��Ʈ �δٴ� ���� /(������)2 �Ѱſ� ����.
	printf("a = %d\n", a);
	a = a >> 2;
	printf("a = %d\n", a);

	return 0;
}