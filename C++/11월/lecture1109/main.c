#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x = 0;

	printf("x�� ���� �Է��ϼ���");
	scanf("%d", &x);

	int result = (x > 0) && (x < 10);

	printf("x:%d�� 0�� 10���̿� %d\n", x, result);

	return 0;
}