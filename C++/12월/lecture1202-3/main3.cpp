#include <iostream>

using namespace std;

class Add {
public:
	int operator()(int a, int b) {
		return a + b;
	}
};

class Sub {
public:
	int operator()(int c, int d) {
		return c - d;
	}
};

class Mul {
public:
	int operator()(int e, int f) {
		return e * f;
	}
};

// ���� Ŭ���� ��ü
// ���� Ŭ���� ��ü
// �� ���� ���� ����ؼ� ����غ�����.

int calculator(Add& ref, int a, int b) {
	return ref(a, b);
}

int calculator2(Sub& ref, int c, int d) {
	return ref(c, d);
}

int calculator3(Mul& ref, int e, int f) {
	return ref(e, f);
}

int main() {
	int a = 20;
	int b = 30;
	int c = 40;
	int d = 25;
	int e = 11;
	int f = 4;

	Add add;
	Sub sub;
	Mul mul;

	cout << a << " + " << b << " = " << add(a, b) << "\n";
	cout << "\n";
	cout << a << " + " << b << " = " << calculator(add, a, b) << "\n";// ��ü�� �Լ��������� ����ϴ� ���� functor���մϴ�
	cout << "\n";
	cout << a << " * " << b<<" = " << calculator3(mul, a, b) << "\n";
	cout << "\n";
	cout << c << " - " << d << " = " << calculator2(sub, c, d) << "\n";// ��ü�� �Լ��������� ����ϴ� ���� functor���մϴ�
	cout << "\n";
	cout << e << " * " << f << " = " << calculator3(mul, e, f) << "\n";// ��ü�� �Լ��������� ����ϴ� ���� functor���մϴ�

	return 0;
}