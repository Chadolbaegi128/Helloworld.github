#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int score = 0;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &score);

	if (score <= 100 && score >= 91) {
		printf("A����Դϴ�.");
	}
	else if (score <= 90 && score >= 81) {
		printf("B����Դϴ�.");
	}
	else if (score <= 80 && score >= 71) {
		printf("C����Դϴ�.");
	}
	else if (score <= 70 && score >= 61) {
		printf("D����Դϴ�.");
	}
	else if (score <= 60 && score >= 0) {
		printf("F����Դϴ�.");
	}
	else {
		printf("�߸��� �Է��Դϴ�.");
	}


	return 0;
}