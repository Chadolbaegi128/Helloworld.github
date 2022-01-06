#include <stdio.h>

int add(int a, int b) {

	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int main() {
	int a = 20;
	int b = 30;

	int(*pfunc)(int, int)=&add;//함수 포인터 변수
	int ret = pfunc(a, b);
	printf("%d + %d = %d\n", a, b, ret);
	
	pfunc = &sub;
	ret = pfunc(a, b);
	printf("%d - %d = %d\n", a, b, ret);
	return 0;
}