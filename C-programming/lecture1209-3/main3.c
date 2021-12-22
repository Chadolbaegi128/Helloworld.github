#include <stdio.h>

int main() {

	union uni2 {
		char value; //signed 음의 정수,0,양의 정수
		unsigned char value2;//0,양의 정수
	};

	union uni2 a;
	a.value2 = -10;

	//-10이 메모리에 저장된 이진수 값이 데이터타입에 따라서
	//다른값이 됩니다. signed일때와 unsigned일때 다른 값으로 처리됩니다.
	printf("value = %d, value2 = %d\n", a.value, a.value2);

	//------------------------------------------------
	int a1 = 20, b1 = 30, c1 = 40, d1 = 50;

	printf("a1 = %d, b1 = %d, c1 = %d, d1 = %d\n", a1, b1, c1, d1);

	/*
   int a = 20;
   int b = 30;
   int c = 40;
   int d = 50;
   */

	printf("monster1 "), printf("monster2 "), printf("monster3 ");

	return 0;
}