#include <stdio.h>
#include <stdlib.h>

//call by value(�������� ���� �Լ� ȣ��)
void func(int value) {
	value = 20;
}

//call by address(pointer/�ּҰ��� ���� �Լ� ȣ��)
void func2(int* pvalue) {
	*pvalue = 100;
}

void func3(int** parray, int count) {
	free(*parray);
	*parray = (int*)malloc(sizeof(int) * count);
}

int global = 100;//�ܺκ���, ��������(���α׷� ��ü�� ������ ��ġ�� ����)

int main() {

	int a;//���ú���, �ڵ�����(�ش� �Լ� �ȿ����� ȣ��ǰ� �����)
	a = 20;

	func(a);
	printf("a=%d\n", a);

	func2(&a);
	printf("a=%d\n", a);

	//��������(�����߿� �ʿ��� ������ �Ҵ� ������)
	//malloc, calloc, realloc

	int*parray=(int*)malloc(sizeof(int) * 100);

	for (int i = 0; i < 100; i++) {
		parray[i] = i;
	}

	for (int i = 0; i < 100; i++) {
		printf("parray[%d]=%d\n", i, parray[i]);
	}

	

	func3(&parray, 200);

	for (int i = 0; i < 200; i++) {
		parray[i] = i;
	}

	for (int i = 0; i < 200; i++) {
		printf("parray[%d]=%d\n", i, parray[i]);
	}

	free(parray);
	
	return 0;
}