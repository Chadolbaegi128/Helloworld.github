#include <iostream>

using namespace std;

int main() {
	int a;
	a = 20;

	int* pa = &a; //포인터형지정자//&a=변수 a의 위치를 나타내는 주소값
	//*pa = 40; //주소값에 사용한 asterik(*) 포인터 연산자

	int** ppa;
	ppa = &pa;

	**ppa;
	**&pa;
	*pa;
	*&a;
	a;
	//위에 나와있는 변수들의 값은 동일하다.

	cout << "값을 출력" << "\n";
	cout << "**ppa = " << **ppa << "\n";
	cout << "**&pa = " << **&pa << "\n";
	cout << "*pa = " << *pa << "\n";
	cout << "*&a = " << *&a << "\n";
	cout << "a = " << a << "\n";
	cout << "\n" << "\n";
	cout << "주소값을 출력" << "\n";
	cout << "&**ppa = " << &**ppa << "\n";
	cout << "&**&pa = " << &**&pa << "\n";
	cout << "&*pa = " << &*pa << "\n";
	cout << "&*&a = " << &*&a << "\n";
	cout << "&a = " << &a << "\n";

	return 0;
}