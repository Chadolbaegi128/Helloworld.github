#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Cash(int money) {
	
	
	if (100000 < money) {
		printf("놀이동산\n");
	}
	else if (money <= 100000 && money > 80000) {
		printf("쇼핑\n");
	}
	else if (money <= 80000 && money > 60000) {
		printf("외식\n");
	}
	else if (money <= 60000 && money > 40000) {
		printf("PC방\n");
	}
	else if (money <= 40000 && money > 20000) {
		printf("배달시켜먹기\n");
	}
	else {
		printf("집에서 쉬기");
	}
}

//명령행 인자
int main(int argc,char** argv) {
	int money = 0;

	printf("금액을 입력하세요:");
	scanf("%d", &money);
	Cash(money);

	printf("금액을 입력하세요: ");
	scanf("%d", &money);
	Cash(money);

	return 0;
}