#include <stdio.h>

//call by value(변수값을 통한 함수 호출)
void func(int value) {
	value = 20;
}

//call by address(pointer/주소값을 통한 함수 호출)
void func2(int* pvalue) {
	*pvalue = 20;
}

int main() {

	int a;//로컬변수, 자동변수
	a = 20;

	int* pa;

	pa=&a;//포인터형 지정자(아스테리크 포인터),
	//int*->&a를 담는 포인터형 변수의 데이터 타입
	//*&a=a;

	int** ppa;//int**->&pa를 담는 포인터형 변수의 데이터 타입
	ppa = &pa;//*&pa=pa;

	int*** pppa;//int***->&ppa를 담는 포인터형 변수의 데이터 타입
	pppa = &ppa;

	**ppa;//주소값앞에 붙이는 아스테리크 포인터->포인터 연산자
	**&pa;
	*pa;
	*&a;
	a;//'a'위에 열거된 포인터형 변수들은 a와 같은 값을 출력한다.

	**ppa = 100;

	//c언어 띄어쓰기 방법->'printf("~\n")'
	printf("&**ppa=%p, &**&pa=%p, &*pa=%p, &*&a=%p, &a=%p\n",
		&**ppa, &**&pa, &*pa, &*&a, &a);
	
	printf("**pa=%d, **&pa=%d, *pa=%d, *&a=%d, a=%d\n",
		**ppa, **&pa, *pa, *&a, a);
	return 0;
}