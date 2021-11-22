#include <iostream>
#include <string>

using namespace std;

class A {
public:
	string _name;
	int _value;
	int _value2;

	A(): _name("0"),_value(0),_value2(0){}
	A(string name, int value, int value2)
		:_name(name), _value(value), _value2(value2)
	{}

	A(A& ref) {
		cout << "���������" << "\n";
		_name = ref._name;
		_value = ref._value;
		_value2 = ref._value2;
	}

	void info() {
		cout << "_name = " << _name << "\n";
		cout << "_value = " << _value << "\n";
		cout << "_value2 = " << _value2 << "\n"<<"\n";
	}
};

int main() {
	A a("a", 10, 20);

	//A b(a);//���������: �ڱ��ڽ��� Ÿ���� ���ڷ� �޴� ������
	A b = a;

	a.info();
	b.info();

	return 0;
}