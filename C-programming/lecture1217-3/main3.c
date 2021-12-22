#include <stdio.h>

int add(int a, int b) {//call by value
	return a + b;
}

int padd(int* pa, int* pb) {//call by address
	*pa = 50;
	*pb = 50;
	return *pa + *pb;
}

// 함수의 호출 방식
// call by value
// call by address
int main() {
	int a = 20;
	int b = 30;

	int ret = add(a, b);//call by value

	printf("%d + %d = %d\n", a, b, ret);

	ret = padd(&a, &b);//call by address
	

	printf("a = %d, b = %d\n", a, b);
	printf("%d + %d = %d\n", a, b, ret);

	return 0;
}