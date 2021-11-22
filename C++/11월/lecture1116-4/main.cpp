#include <iostream>

using namespace std;

class A {
public:
	int _value;
	int _value2;

	A(int value, int value2)
		:_value(value), _value2(value2)
	{}

	void info()//�Ϲݸ���Լ�
	{
		cout << "_value = " << this->_value << "\n";//this �ڱ������� ������
		cout << "_value2 = " << this->_value2 << "\n";
	}
};

int main() {
	A a(10, 20);
	a.info();
	cout << "\n";
	A b(30, 40);
	b.info();
	cout << "\n";

	cout << "_value = " << a._value << "\n";//period �����ڷ� ��������� ����
	cout << "_value2 = " << a._value2 << "\n";
	cout << "\n";

	A* pa = &a;
	cout << "_value = " << pa->_value << "\n";//ȭ��ǥ �����ڷ� ��������� ����
	cout << "_value2 = " << pa->_value2 << "\n";
}