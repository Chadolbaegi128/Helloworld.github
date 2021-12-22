#include <stdio.h>

int main() {
	int a = 20;

	int* pa = &a;//'*'=포인터 형지정자(역참조 연산자)
	//주소값을 저장하는 변수라는 의미

	int** ppa = &pa;

	*&a;//주소값 앞에 포인터 형지정자('*')를 붙이면 
	a;
	//포인터 연산자가 된다.

	*&a = 10000;

	printf("a = %d\n", a);

	**ppa;//ppa변수에 *(포인터 연산자)를 붙인건,
	//ppa변수가 저장하고 있는 값(&pa)에 포인터 연산자를 붙인
	//것과 동일합니다.
	**&ppa;
	*pa;
	*&a;
	a;

	printf("&**ppa = %p, &**&pa = %p, &*pa = %p,&*&a = %p, &a = %p\n",
		&**ppa, &**&pa, &*pa, &*&a, &a);

	printf("**ppa = %d, **&pa = %d, *pa = %d, *&a = %d, a = %d\n",
		**ppa, **&pa, *pa, *&a, a);

	**ppa = 1000;
	printf("**ppa = %d, **&pa = %d, *pa = %d, *&a = %d, a = %d\n",
		**ppa, **&pa, *pa, *&a, a);

	return 0;
}