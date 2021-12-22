#include <stdio.h>

int main() {
	int array[100];

	int array2[10][10];//2차원 배열

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			array2[i][j] = i * 10 + j;
		}
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("array2[%d][%d] = %d\n", i, j, array2[i][j]);
		}
	}

	return 0;
}