#include <stdio.h>

int main() {
	int a = 20;
	int b = 30;

	(a > b) ? printf("a:%d�� b:%d���� ũ��. \n", a, b)
		: printf("a:%d�� b:%d���� �۰ų� ũ��. \n", a, b);

	int result = (a > b) ? a : b;
	printf("a:%d�� b:%d�߿� ū ����? %d\n", a, b, result);

	return 0;
}