#include <stdio.h>

int main() {

	int a = 20;
	int b = 30;

	int result = a + b;
	printf("%d + %d = %d\n", a, b, result);

	result = a - b;
	printf("%d - %d = %d\n", a, b, result);

	result = a * b;
	printf("%d * %d = %d\n", a, b, result);

	a = 2;
	b = 3;

	result = a / b;//������ ������ ��Ģ�����ϸ�
	//������� ������ Ÿ���� ����
	printf("%d / %d = %d\n", a, b, result);

	float result2 = a / (float)b;// ����/����=>����
	//������ �Ǽ������� ����ȭ ������� �Ѵ�.
	printf("%d / %d = %f\n", a, b, result2);

	return 0;
}