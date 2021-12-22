#include <stdio.h>

/// 변수 ppa와 변수 ppb를 changevalue함수에 인자로 전달해서 
// a변수와 b변수의 값을 서로 바꾸세요...

void changeValue(int **ppa,int **ppb ) {
	int temp = **ppa;
	**ppa = **ppb;
	**ppb = temp;
}
int main() {
	int a=20;
	int b=30;
	
	int* pa;//포인터형 지정자
	pa = &a;

	int** ppa = &pa;
	
	int* pb;
	pb = &b;

	int** ppb = &pb;
	
	printf("a = %d, b = %d\n", a, b);

	changeValue(&pa, &pb);

	printf("a = %d, b = %d\n", a, b);
	/*
  **ppa;   // 주소값에 사용한 *(에스터리스크asterisk) 포인터 연산자
  **&pa;
  *pa;
  *&a;
  a;
  */

	return 0;
}