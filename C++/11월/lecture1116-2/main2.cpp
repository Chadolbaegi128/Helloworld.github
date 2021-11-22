#include <iostream>

using namespace std;

class Math2 {
public:
	int add(int a, int b) {//�Ϲݸ���Լ�
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
	static int add(int a, int b) {//��������Լ�(Ŭ���� �Լ�)
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

	Math2 math; //math ��ü

	//�Ϲݸ���Լ��� ��ü�� �����ؾ����� ���� ����
	cout << a << "+" << b << " = " << math.add(a, b) << "\n";
	cout << a << "-" << b << " = " << math.sub(a, b) << "\n";
	cout << a << "*" << b << " = " << math.mul(a, b) << "\n";

	//��������Լ��� ��ü�� �������� �ʰ� �ٷ� ������ ����
	cout << a << "+" << b << " = " << Math3::add(a, b) << "\n";
	cout << a << "-" << b << " = " << Math3::sub(a, b) << "\n";
	cout << a << "*" << b << " = " << Math3::mul(a, b) << "\n";

	return 0;
}