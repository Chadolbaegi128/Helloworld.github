#include <stdio.h>

/// ���� ppa�� ���� ppb�� changevalue�Լ��� ���ڷ� �����ؼ� 
// a������ b������ ���� ���� �ٲټ���...

void changeValue(int **ppa,int **ppb ) {
	int temp = **ppa;
	**ppa = **ppb;
	**ppb = temp;
}
int main() {
	int a=20;
	int b=30;
	
	int* pa;//�������� ������
	pa = &a;

	int** ppa = &pa;
	
	int* pb;
	pb = &b;

	int** ppb = &pb;
	
	printf("a = %d, b = %d\n", a, b);

	changeValue(&pa, &pb);

	printf("a = %d, b = %d\n", a, b);
	/*
  **ppa;   // �ּҰ��� ����� *(�����͸���ũasterisk) ������ ������
  **&pa;
  *pa;
  *&a;
  a;
  */

	return 0;
}