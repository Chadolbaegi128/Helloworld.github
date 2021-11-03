#include <iostream>
#include <string>

using namespace std;

//유틸리티 클래스(Utility class)
class Math2 {
public:
	static float add(float a, float b) {
		float result = a + b;

		return result;
	}
	//실수 덧셈, 뺄셈, 곱셈, 나눗셈 정적 멤버함수를 만들고
	//메인함수에서 값을 계산해서 출력해보세요..

	static float minus(float A, float B) {
		float result = A - B;

		return result;
	}

	static float multiple(float a, float b) {
		float result = a * b;

		return result;
	}

	static float div(float a, float b) {
		float result = a / b;
		
		return result;
	}
};


int main() {
	float a = 20.132;
	float b = 30.3;
		
	cout << a << " + " << b << " = " << Math2::add(a, b) << "\n";
	cout << "\n";
	cout << a << " - " << b << " = " << Math2::minus(a, b) << "\n";
	cout << "\n";
	cout << a << " * " << b << " = " << Math2::multiple(a, b) << "\n";
	cout << "\n";
	cout << a << " / " << b << " = " << Math2::div(a, b) << "\n";

	return 0;
}