#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x = 0;

	printf("x�� ���� �Է��ϼ���: ");
	scanf("%d", &x);

	int result = (0 < x) && (x < 10);//0<x<10�� ���α׷��ֿ��� ������ ���� �����̴�.

	printf("x�� 0�� 10���̿� �ֳ���? %d\n", result);

	return 0;
}