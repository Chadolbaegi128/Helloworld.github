#include <iostream>
#include <string>

using namespace std;

//��ƿ��Ƽ Ŭ����(Utility class)
class Math2 {
public:
	static float add(float a, float b) {
		float result = a + b;

		return result;
	}
	//�Ǽ� ����, ����, ����, ������ ���� ����Լ��� �����
	//�����Լ����� ���� ����ؼ� ����غ�����..

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