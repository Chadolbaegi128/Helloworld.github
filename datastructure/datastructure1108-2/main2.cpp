#include <stdio.h>
#include <stdlib.h>

//call by value(변수값을 통한 함수 호출)
void func(int value) {
	value = 20;
}

//call by address(pointer/주소값을 통한 함수 호출)
void func2(int* pvalue) {
	*pvalue = 100;
}

void func3(int** parray, int count) {
	free(*parray);
	*parray = (int*)malloc(sizeof(int) * count);
}

int global = 100;//외부변수, 전역변수(프로그램 전체에 영향을 끼치는 변수)

int main() {

	int a;//로컬변수, 자동변수(해당 함수 안에서만 호출되고 사라짐)
	a = 20;

	func(a);
	printf("a=%d\n", a);

	func2(&a);
	printf("a=%d\n", a);

	//동적변수(실행중에 필요한 공간을 할당 받을때)
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