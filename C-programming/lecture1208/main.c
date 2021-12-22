#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x = 0;

	printf("x의 값을 입력하세요: ");
	scanf("%d", &x);

	int result = (0 < x) && (x < 10);//0<x<10은 프로그래밍에서 통용되지 않은 형식이다.

	printf("x가 0과 10사이에 있나요? %d\n", result);

	return 0;
}