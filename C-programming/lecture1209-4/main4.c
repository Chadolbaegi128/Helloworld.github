#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a = 20;
	printf("정수값을 입력하세요.");
	scanf("%d", &a);

	if (a > 20) {//단일 조건문
		printf("a는 20보다 크다.\n");
	}

	if (a > 20) {//이중 조건문
		printf("a는 20보다 크다.\n");
	}
	else {
		printf("a는 20보다 작거나 같다.\n");
	}

	if (0 < a && 20 > a) {
		printf("a: %d값은 0과 10사이에 있다.\n", a);
	}

	if (!(a - 20)) {//c언어에서는 논리식에 정수연산식을 사용할 수 있다.
		printf("a값이 20과 같다.\n");
	}

	if (a > 20) //if문에 딸려 있는 문장이 한 문장이면 중괄호가 생략 가능
		printf("a는 20보다 크다\n");
	

	return 0;
}