#include <stdio.h>

int main() {
	int a = 2;
	int b = 3;

	// 다른 변수는 사용하지 말고
   // a변수의 값과 b 변수 값을 바꾸세요..

   // 이렇게 temp 변수를 사용하지 말고
   // a과 b의 값을 바꾸시면 됩니다.

	printf("a = %d, b = %d\n\n", a, b);

	//int temp = a;
	//a = b;
	//b = temp;

	//printf("a = %d, b = %d\n", a, b);

	a = a ^ b;//비트연산자 XOR
	b = a ^ b;
	a = a ^ b;
	printf("a = %d, b = %d\n", a, b);

	return 0;
}