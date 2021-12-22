#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int salary = 0;
	printf("월급을 입력하세요: ");
	scanf("%d", &salary);

	if (salary > 4000000) {
		printf("플레이스테이션5\n");
	}
	else if (salary > 3000000) {
		printf("닌텐도스위치\n");
	}
	else if (salary > 2500000) {
		printf("나홀로여행\n");
	}
	else if (salary > 2000000) {
		printf("펀드\n");
	}
	else {
		printf("적금\n");
	}
	return 0;
}