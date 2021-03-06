#include <stdio.h>

int main() {
	float a = 3.4f;
	int b = 20;

	b = a;//기본 데이터타입간의 대입에서는
	//데이터타입이 틀려도 컴파일러가 알아서
	//형변환을 시켜 줍니다.=>묵시적 형변환
	printf("b = %d\n", b);

	a = 3.4f;
	b = 20;
	b = (int)a;//명시적 형변환
	//큰값을 다루는 데이터타입을 작은 값을 다루는 데이터
	//타입에 대한 대입을 할때는 명시적 형변환을
	//해줘야 한다.

	printf("b = %d\n", b);

	a = 3.4f;
	b = 20;
	a = b;//작은 값을 다루는 데이터타입을 큰 값을 다루는
	//데이터타입에 대입할때는 묵시적 형변환을 해도
	//괜찮다. 값의 유실이 생기지 않는다.

	printf("b = %d\n", b);

	return 0;
}