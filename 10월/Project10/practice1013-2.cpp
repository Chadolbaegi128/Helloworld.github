#include <iostream>

using namespace std;

class A {
private:
	const int a;//const�� �������
	int & ref;//������ ����

public:
	A(int a, int & ref) :a(a), ref(ref)
	{
		
	}

	void info() {
		cout << "a = " << a << endl;
		cout << "ref = " << ref << endl;//ref=>a/b&ref ������(��Ī)
	}

	void SetRef(int value) {
		ref = value;
	}
};

int main() {
	int a;
	a = 200;

	A b(1000, a);
	b.info();
	cout << endl;

	b.SetRef(2000);
	b.info();
	cout << endl;

	cout << "a = " << a << endl;

}