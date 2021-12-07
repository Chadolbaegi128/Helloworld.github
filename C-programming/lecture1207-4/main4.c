#include <stdio.h>

int main() {
	int a = 20;

	a = -a;//부호 연산자
	printf("a = %d\n", a);

	int b = 30;
	int result = a > b;//관계연산자의 연산 결과값의
	//데이터 타입은 논리값
	//c언어는 논리 타입이 없습니다.
	//정수값을 가지고 논리타입을 처리합니다.
	//0은 거짓
	//0이외의 숫자는 참으로 받아들인다.

	printf("%d > %d = %d\n\n", a, b, result);

	result = a < b;
	printf("%d < %d = %d\n\n", a, b, result);

	result = a <= b;
	printf("%d <= %d = %d\n\n", a, b, result);

	result = a >= b;
	printf("%d >= %d = %d\n\n", a, b, result);

	result = a == b;
	printf("%d == %d = %d\n\n", a, b, result);

	result = a != b;
	printf("%d != %d = %d\n", a, b, result);

	return 0;
}