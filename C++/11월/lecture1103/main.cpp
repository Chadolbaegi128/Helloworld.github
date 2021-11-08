#include <iostream>

using namespace std;

class A {//��������� ������ Ÿ��=>Ŭ���� Ÿ��

private:
	int _value;
	int _value2;
	
public:
	A(int value, int value2)
		:_value(value), _value2(value2){}

	void info() {
		cout << "_value = " << _value << "\n";
		cout << "_value2 = " << _value2 << "\n";
	}

	A operator*(A& ref) {//������ �����ε�, 'operator'���� �����ڴ� �������� �ǹ̰�
						//�߰�ȣ���� �ִ� ���� �������� �ǹ̸� ������ ����(������ ������ �����ε��ؼ� �������� ���� ���� ������ �������� ����)
		A temp(_value * ref._value, _value2 * ref._value2);

		return temp;
	}

	A operator+(A& ref) {
		A temp(_value + ref._value, _value2 + ref._value2);
		
		return temp;
	}

	A operator-(A& ref) {
		A temp(_value - ref._value, _value2 - ref._value2);

		return temp;
	}

	A operator/(A& ref) {
		A temp(_value / ref._value, _value2 / ref._value2);

		return temp;
	}
};

int main() {
	A a(10, 20);
	A b(20, 30);

	A c(0, 0);

	c = a * b;//�Լ�ȣ���̶� ����� ���
	c = a.operator*(b);

	c.info();

	c = a + b;
	c = a.operator+(b);

	c.info();

	c = a - b;
	c = a.operator-(b);

	c.info();

	c = a / b;
	c = a.operator/(b);
		
	c.info();
	


	return 0;
}