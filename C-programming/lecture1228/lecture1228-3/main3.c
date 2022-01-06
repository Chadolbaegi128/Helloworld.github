#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "Dynamic2Darray.h"


int main() {
	int column = 10;
	int row = 10;

	printf("컬럼값을 입력하세요: ");
	scanf("%d", &column);

	printf("로우값을 입력하세요: ");
	scanf("%d", &row);

	int** pparray = MakeDynamic2Darray(column, row);

	for (int i = 0; i < column; i++) {
		for (int j = 0; j < row; j++) {
			pparray[i][j] = i * row + j;

			//*(*(pparray + i) + j) = i * row + j;
			//*위 배열식은 이 포인터 식이랑 똑같은 수식임
		}
	}

	for (int i = 0; i < column; i++) {
		for (int j = 0; j < row; j++) {
			printf("pparray[%d][%d] = %d\n", i, j, pparray[i][j]);
		}
	}

	DeleteDynamic2Darray(pparray, column);

	

	return 0;
}