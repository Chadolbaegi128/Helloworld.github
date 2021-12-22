#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num = 0;

Start:
	printf("1을 누르면 반복합니다.(0: exit)");
	scanf("%d", &num);

	if (num == 1) {
		goto Start;//상향식 분기(상향식 분기는 비추천)
	}
	else {
		goto Exit;//하향식 분기(상관없음)
	}
	printf("출력안됨");

Exit://레이블

	return 0;
}