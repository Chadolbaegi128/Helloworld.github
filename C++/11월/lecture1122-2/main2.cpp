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

};

//기능의 확장성, 입장, 상속
class Math3 :public Math2 {
public:
	float div(int a, int b) {
		return a /(float) b;
	}
};

int main() {
	int a = 20;
	int b = 30;

	Math2 math2;

	cout << a << " + " << b << " = " << math2.add(a, b) << "\n";
	cout << a << " - " << b << " = " << math2.sub(a, b) << "\n";

	Math3 math3;

	cout << a << " + " << b << " = " << math3.add(a, b) << "\n";
	cout << a << " - " << b << " = " << math3.sub(a, b) << "\n";
	cout << a << " / " << b << " = " << math3.div(a, b) << "\n";

	return 0;
}