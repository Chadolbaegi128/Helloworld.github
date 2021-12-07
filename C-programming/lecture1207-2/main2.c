#include <stdio.h>

int main() {

	int a = 20;
	int b = 30;

	int result = a + b;
	printf("%d + %d = %d\n", a, b, result);

	result = a - b;
	printf("%d - %d = %d\n", a, b, result);

	result = a * b;
	printf("%d * %d = %d\n", a, b, result);

	a = 2;
	b = 3;

	result = a / b;//정수와 정수를 사칙연산하면
	//결과값의 데이터 타입이 정수
	printf("%d / %d = %d\n", a, b, result);

	float result2 = a / (float)b;// 정수/정수=>정수
	//한쪽을 실수형으로 형변화 시켜줘야 한다.
	printf("%d / %d = %f\n", a, b, result2);

	return 0;
}