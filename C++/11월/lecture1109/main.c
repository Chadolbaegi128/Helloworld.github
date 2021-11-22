#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x = 0;

	printf("x의 값을 입력하세요");
	scanf("%d", &x);

	int result = (x > 0) && (x < 10);

	printf("x:%d는 0과 10사이에 %d\n", x, result);

	return 0;
}