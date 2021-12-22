#include <stdio.h>
int global = 10;

//자동변수를 쓸 때 사용하면 안되는 예시
void func3(int value) {
	int a;
	a = value;
}

void func2(int value) {
	int a;
	a = value;
	func3(value);
}

int* func(int value) {
	int a;
	a = value;

	func2(value);

	int b = 100;

	return&a;
}

int main() {//프로그램의 시작점

	int a = 20;//자동변수
	int* pfunca = func(a);//자동변수의 주소값을 외부로 전달해서 사용하시면
	//안됩니다.

	printf("func a = %d\n", *(pfunca));
	//자동변수의 주소값을 외부로 전달했을 때 원하는 값이
	//나오지 않을 가능성이 있음

	return 0;
}