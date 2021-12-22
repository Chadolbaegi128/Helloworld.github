#include <stdio.h>

int main() {
	int a;
	a = 20;
	int b;
	b = 30;

	int* pa;//포인터형 지정자(포인터형 4byte)
	pa = &a;

	int* pb;
	pb = &b;

	int** ppa;
	ppa = &pa;

	int** ppb;
	ppb = &pb;

	printf("**ppa = %d, **ppb = %d\n", **ppa, **ppb);

	ppa = &pb;
	ppb = &pa;
	//여기서 ppa에는 b변수의 주소값을 가진 pb의 주소값이 들어가고
	//ppb에는 a변수의 주소값을 가진 pa의 주소값이 들어가게 된다.
	printf("**ppa = %d, **ppb = %d\n", **ppa, **ppb);


	return 0;
}