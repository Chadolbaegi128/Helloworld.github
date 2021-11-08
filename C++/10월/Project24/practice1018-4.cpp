#include <iostream>

using namespace std;

class A {
public:
	int _value1;
	int _value2;

	A(int value1, int value2) : _value1(value1), _value2(value2) {
		cout << "���ڸ� �޴� ������" << "\n";
	}

	A(A& ref) {//���������, �Ϲ����� ��쿡�� �ȸ��� ��.
		cout << "���������" << "\n";
		_value1 = ref._value1;
		_value2 = ref._value2;
	}

	~A() {
		cout << "�Ҹ���" << "\n";
	}

	void info() {
		cout << "_value1 = " << _value1 << "\n";
		cout << "_value2 = " << _value2 << "\n";
	}

};

int main() {
	//������
	//�⺻������
	//���ڸ� �޴� ������
	//�ڱ��ڽ��� ������ Ÿ���� ���ڷ� �޴� ������(���������)

	A a(10, 10);

	A b(a); //���������
	A c = a;

	b.info();
	cout << "\n";
	c.info();

	return 0;
}