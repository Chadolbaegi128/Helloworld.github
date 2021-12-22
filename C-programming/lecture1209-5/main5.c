#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int money = 0;
	printf("용돈을 입력하세요: ");
	scanf("%d", &money);

	if (money <= 20000 && money > 10000) {
		printf("집에서 라면\n");
	}
	else if (money > 100000) {//다중 조건문(조건이 여러 개인 경우 사용)
		printf("영화\n");
	}
	else if (money<=100000 && money > 60000) {
		printf("PC방\n");
	}
	else if (money<=60000 && money > 40000) {
		printf("중국집\n");
	}
	else if (money<=40000 && money > 20000) {
		printf("당구장\n");
	}
	else {//else문은 생략이 가능(이도저도 아닐때)
		printf("집에서 낮잠\n");
	}

	return 0;
}