#include <stdio.h>

//void printArray(int(*parray)[10], int column, int row)
void printArray(int parray[][10], int column, int row) {
	for (int i = 0; i < column; i++) {
		for (int j = 0; j < row; j++) {
			printf("parray[%d][%d] = %d\n", i, j, parray[i][j]);
			//printf("parray[%d][%d] = %d\n", i, j, *(*(parray + i) + j));
		}
	}
}
int main() {
	int array[10][10];//�������迭�� �迭���� ������Ÿ��?

	int(*parray)[10] = array;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			parray[i][j] = i * 10 + j;//�迭��
			*(*(parray + i) + j) = i * 10 + j;//�����ͽ�
		}
	}

	printArray(array, 10, 10);

	return 0;
}