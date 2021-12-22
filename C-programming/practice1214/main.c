#include <stdio.h>

int main() {
	//도형그리기
	int i = 0;
	int j = 0;
	printf("직선\n");
	for (i = 0; i < 10; i++) {
		printf("*");
	}
	printf("\n");

	printf("\n사각형\n");
	for (i = 0; i <10; i++) {
		for (j = 0; j <= 9; j++) {
			printf("*");
		}
		printf("\n");
	}

	printf("\n속이 빈 사각형\n");
	for (i = 0; i < 10; i++) {
		for (j = 1; j < 10; j++) {
			if (i == 1 || i == 9||j==1||j==9) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}

	printf("\n직각삼각형\n");
	for (i = 0; i < 10; i++) {
		for (j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	printf("\n정삼각형\n");
	for (i = 0; i < 10; i++) {
		for (j = 10; j > i; j--) {
			printf(" ");
		}
		for (j = 0; j <= 2*i; j++) {
			printf("*");
		}
		printf("\n");
	}

	printf("\n도형 테스트\n");
	for (int i = 0; i < 9; i++) {
		for (int j = 9; j >= i; j--) {
			printf(" ");
		}
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}