#include <iostream>

using namespace std;

class Math2 {
public:
	int add(int a, int b) {
		return a + b;
	}

	int sub(int a, int b) {
		return a - b;
	}

	int mul(int a, int b) {
		return a * b;
	}

	float divs(int a, int b) {//정수형 함수를 실수형 결과값으로 표현하기
		return (float)a /b;//float divs(int a, int b)
	}						//{return (float)a/b; 또는 return a/(float)b; 또는 return (float)a/(float)b;
							// '정수'/(float 또는 double)'정수' 또는 '정수'/'실수'를 반환하면 실수값이 나온다.
	float add(float c, float d) {
		return c + d;
	}

	float sub(float c, float d) {
		return c - d;
	}

	float mul(float c, float d) {
		return c * d;
	}

	float div(float c, float d) {
		return c / d;
	}

	double add(double e, double f) {
		return e + f;
	}

	double sub(double e, double f) {
		return e - f;
	}

	double mul(double e, double f) {
		return e * f;
	}

	double div(double e, double f) {
		return e / f;
	}
};

int main() {
	int a = 20;
	int b = 30;

	float c = 1.2f;
	float d = 3.4f;

	double e = 15.4;
	double f = 60.4;

	Math2 math;

	cout << a << "+" << b << " = " << math.add(a, b) << "\n";
	cout << a << "-" << b << " = " << math.sub(a, b) << "\n";
	cout << a << "*" << b << " = " << math.mul(a, b) << "\n";
	cout << a << "/" << b << " = " << math.divs(a, b) << "\n";
	cout << "\n";

	cout << c << "+" << d << " = " << math.add(c, d) << "\n";
	cout << c << "-" << d << " = " << math.sub(c, d) << "\n";
	cout << c << "*" << d << " = " << math.mul(c, d) << "\n";
	cout << c << "/" << d << " = " << math.div(c, d) << "\n";
	cout << "\n";

	cout << e << "+" << f << " = " << math.add(e, f) << "\n";
	cout << e << "-" << f << " = " << math.sub(e, f) << "\n";
	cout << e << "*" << f << " = " << math.mul(e, f) << "\n";
	cout << e << "/" << f << " = " << math.div(e, f) << "\n";
	cout << "\n";

	return 0;
}