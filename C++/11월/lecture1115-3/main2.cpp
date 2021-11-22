#include <iostream>

using namespace std;

void func(int value) {//Call by value(값으로 접근), int value=a
	value = 20;
}

void func2(int* pvalue) {//Call by address(주소값으로 접근), int* pvalue=&a(a의 주소값이 저장됨/주소값을 저장하는 변수가 생성됨)
	*pvalue = 30;
}

void func3(int& refvalue) {//Call by reference(변수의 참조형으로 접근), int& refvalue=a(int형 자료의 변수명
	//이 다른 이름으로 변경되는 것과 똑같음, 주소값으로 접근하는 것의 위험성을 줄이기 위해 사용됨, C언어를 제외하고
	//모든 프로그래밍 언어에 사용됨)
	refvalue = 200;
}

int main() {
	int a = 100;

	func(a);//a값에 접근

	cout << "a = " << a << "\n";

	func2(&a);//a의 주소(주소값)에 접근

	cout << "a = " << a << "\n";

	func3(a);//a의 참조형으로 접근

	cout << "a = " << a << "\n";

	return 0;
}