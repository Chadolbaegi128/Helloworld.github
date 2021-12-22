#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int score = 0;

	printf("점수를 입력하시요: ");
	scanf("%d", &score);

	if (score <= 100 && score >= 91) {
		printf("A등급입니다.");
	}
	else if (score <= 90 && score >= 81) {
		printf("B등급입니다.");
	}
	else if (score <= 80 && score >= 71) {
		printf("C등급입니다.");
	}
	else if (score <= 70 && score >= 61) {
		printf("D등급입니다.");
	}
	else if (score <= 60 && score >= 0) {
		printf("F등급입니다.");
	}
	else {
		printf("잘못된 입력입니다.");
	}


	return 0;
}