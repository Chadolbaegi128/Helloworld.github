#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "Dynamic2Darray.h"


int main() {
	int column = 10;
	int row = 10;

	printf("�÷����� �Է��ϼ���: ");
	scanf("%d", &column);

	printf("�ο찪�� �Է��ϼ���: ");
	scanf("%d", &row);

	int** pparray = MakeDynamic2Darray(column, row);

	for (int i = 0; i < column; i++) {
		for (int j = 0; j < row; j++) {
			pparray[i][j] = i * row + j;

			//*(*(pparray + i) + j) = i * row + j;
			//*�� �迭���� �� ������ ���̶� �Ȱ��� ������
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