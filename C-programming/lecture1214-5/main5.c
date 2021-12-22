#include <stdio.h>

int main() {
	//실습
	//1차원 배열에 0~100 까지의 숫자를 저장하고
	//3의 배수를 출력해보세요.
	//3의 배수인 요소에 곱하기 2를 해서 저장하고 출력해보세요.

	//2차원 배열에 구구단의 결과값을 입력하시고
	//출력해보세요.

	int array[101];

	printf("3의 배수 출력\n");
	for (int i = 0; i < 101; i++) {
		array[i] = i;
	}

	for (int i = 3; i < 101; i++) {
		if (array[i] % 3 == 0) {
			printf("array[%d] = %d\n", i,array[i]);
		}
	}

	printf("\n3의 배수인 요소에 2를 곱한 후에 출력\n");
	for (int i = 0; i < 101; i++) {
		if (array[i] % 3 == 0) {
			array[i] = i * 2;
		}
	}

	for (int i = 3; i < 101; i++) {
		if (array[i] % 3 == 0) {
			printf("array[%d] = %d\n", i, array[i]);
		}
	}

	int array2[10][10];
	printf("\n2차원 배열을 통한 구구단 출력\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			array2[i][j] = i * j;
		}
	}

	for (int i = 2; i < 10; i++) {
		for (int j = 2; j < 10; j++) {
			printf("array2[%d][%d] = %d\n", i, j, array2[i][j]);
		}
	}

	int gugudan[9][10];
	printf("\n구구단\n");
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 10; j++) {
			gugudan[i][j] = i * j;
		}
	}

	for (int i = 2; i < 9; i++) {
		for (int j = 2; j < 10; j++) {
			printf("gugudan[%d][%d] = %d\n", i, j, gugudan[i][j]);
		}
	}

	return 0;
}