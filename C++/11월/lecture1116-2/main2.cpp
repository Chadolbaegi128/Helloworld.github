#include <iostream>

using namespace std;

class Math2 {
public:
	int add(int a, int b) {//일반멤버함수
		return a + b;
	}

	int sub(int a, int b)
	{
		return a - b;
	}

	int mul(int a, int b)
	{
		return a * b;
	}
};

class Math3 {
public:
	static int add(int a, int b) {//정적멤버함수(클래스 함수)
		return a + b;
	}

	static int sub(int a, int b) {
		return a - b;
	}

	static int mul(int a, int b)
	{
		return a * b;
	}
};

int main() {
	int a = 20;
	int b = 30;

	Math2 math; //math 객체

	//일반멤버함수는 객체를 생성해야지만 접근 가능
	cout << a << "+" << b << " = " << math.add(a, b) << "\n";
	cout << a << "-" << b << " = " << math.sub(a, b) << "\n";
	cout << a << "*" << b << " = " << math.mul(a, b) << "\n";

	//정적멤버함수는 객체를 생성하지 않고 바로 접근이 가능
	cout << a << "+" << b << " = " << Math3::add(a, b) << "\n";
	cout << a << "-" << b << " = " << Math3::sub(a, b) << "\n";
	cout << a << "*" << b << " = " << Math3::mul(a, b) << "\n";

	return 0;
}