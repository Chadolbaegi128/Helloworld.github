#include <stdio.h>

int main() {
	//도형그리기
	printf("직선\n");
	for (int i = 0; i < 10; i++) {//일차원적인 데이터
		printf("*");
	}

	printf("\n\n사각형\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("*");
		}
		printf("\n");
	}

	// 속이빈 사각형
	int i = 0;
	int j = 0;

	printf("\n속이 빈 사각형\n");
	for (int i = 0; i < 10; i++) {

		for (int j = 0; j < 10; j++) {
			if (j == 0 || j == 9 || i == 0 || i == 9) {
				printf("*");
			}
			else {
				printf(" ");
			}

		}

		printf("\n");
	}



	// 직각삼각형
	printf("\n직각삼각형\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	// 역직각삼각형
	printf("\n역직각삼각형\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j <= i; j++) {
			printf(" ");
		}
		for (int j = 10; j > i; j--) {
			printf("*");
		}
		printf("\n");
	}
	// 정삼각형.
	printf("\n정삼각형\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10 - i; j++) {
			printf(" ");
		}

		for (int j = 0; j < i * 2 + 1; j++) {
			printf("*");
		}
		printf("\n");
	}

	// 역 정삼각형
	printf("\n역 정삼각형\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 10; j >= 10 - i; j--) {
			printf(" ");
		}
		for (int j = 19; j > i * 2; j--) {
			printf("*");
		}
		printf("\n");
	}

	// 속이 빈 정삼각형
	printf("\n속이 빈 정삼각형\n");
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10 - i; j++) {

			printf(" ");

		}

		for (j = 0; j < i * 2 + 1; j++) {
			if (j == 0 || j == i * 2 || i == 9) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}


		printf("\n");
	}


	// 속이 빈 역 정삼각형

	return 0;
}