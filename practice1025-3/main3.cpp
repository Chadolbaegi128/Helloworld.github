#include <iostream>

using namespace std;

class A {
public:
	int _value;

	A(int value):_value(value){}

	void info() {
		cout << "A class value= " << _value << "\n";
	}
};

class B {
public:
	int _value;
	int _value2;

	B(int value, int value2)
		:_value(value), _value2(value2){}

	void info() {
		cout << "B class value= " << _value << "\n";
		cout << "B class value2= " << _value2 << "\n";
	}
};

class C: public B, public A {
public:
	int _value3;

	C(int value, int value2, int value3)
		:A(value), B(value, value2), _value3(value3){}

	void info() {
		A::info();
		B::info();
	}
};

int main() {

	C c(10, 20, 30);

	c.A::_value = 20;
	c.B::_value = 30;
	c.A::info();
	c.B::info();
	c.info();

	return 0;
}