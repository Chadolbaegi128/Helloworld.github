#include <iostream>

using namespace std;

class Alphabet {
protected:
	int _value;
	int _value2;

public:
	Alphabet(int value, int value2)
		:_value(value), _value2(value2) {}

	void printValue() {
		cout << "AlphaBet class _value= " << _value << "\n";
	}

	void printValue2() {
		cout << "AlphaBet class _value2= " << _value2 << "\n";
	}
};

class A: public Alphabet {
public:
	A(int value, int value2):Alphabet(value,value2){}

	void printValue() {
		cout << "A class _value= " << _value << "\n";
	}
};

class B : public Alphabet {
public:
	B(int value, int value2)
		:Alphabet(value, value2){}

	void printValue() {
		cout << "B class _value= " << _value << "\n";
	}
};

class C:public Alphabet {
public:
	C(int value,int value2)
		:Alphabet(value, value2){}

	void printValue() {
		cout << "C class _value= " << _value << "\n";
	}
};

//오버로딩
void func(Alphabet* pvalue) {
	pvalue->printValue();
}

void func2(Alphabet* pvalue) {
	pvalue->printValue2();
}

int main() {
	A a(10, 15);
	B b(20, 25);
	C c(30, 35);

	func(&a);
	func(&b);
	func(&c);

	return 0;
}