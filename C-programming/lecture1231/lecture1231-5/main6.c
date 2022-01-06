#include <stdio.h>

//const는 변수를 상수로 만듦
int main() {
	const int MAX = 100;//const형 변수는 정의할 때 초기화를 동시에 해야 함
	//MAX = 200;   // MAX 변수는 상수성을 띄게 되어 값을 변경할 수 없습니다.

	int a = 20;
	int b = 30;

	const int* pa = &a;//고정된 주소값(주소값 변경 불가)

	pa = &b;

	*pa = 10;//pa변수에 저장된 주소값에 할당된 공간에 값을 넣을 수 없음

	int* const pa2 = &a;//고정된 pa2변수의 값(pa2변수의 값 변경 불가)

	*pa2 = 20;
	pa2 = &b;

	const int* const pa3 = &a;//pa3의 값,int형 포인터 변경 불가

	*pa3 = 30;

	pa3 = &b;

	return 0;
}