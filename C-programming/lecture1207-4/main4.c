#include <stdio.h>

int main() {
	int a = 20;

	a = -a;//��ȣ ������
	printf("a = %d\n", a);

	int b = 30;
	int result = a > b;//���迬������ ���� �������
	//������ Ÿ���� ����
	//c���� �� Ÿ���� �����ϴ�.
	//�������� ������ ��Ÿ���� ó���մϴ�.
	//0�� ����
	//0�̿��� ���ڴ� ������ �޾Ƶ��δ�.

	printf("%d > %d = %d\n\n", a, b, result);

	result = a < b;
	printf("%d < %d = %d\n\n", a, b, result);

	result = a <= b;
	printf("%d <= %d = %d\n\n", a, b, result);

	result = a >= b;
	printf("%d >= %d = %d\n\n", a, b, result);

	result = a == b;
	printf("%d == %d = %d\n\n", a, b, result);

	result = a != b;
	printf("%d != %d = %d\n", a, b, result);

	return 0;
}