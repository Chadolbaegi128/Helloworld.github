#include <iostream>

using namespace std;

class A {
private:
	int _value = 100;

public:
	A() {
		cout << "A class 기본생성자" << "\n";
	}

	A(int value) :_value(value)
	{
		cout << "A class 인자를 받는 생성자" << "\n";
	}

	~A() {
		cout << "A class 소멸자" << "\n";
	}
};

class B {
private:
	A _a;//포함

public:
	B()
	{
		cout << "B class 기본생성자" << "\n";
	}

	B(int value) :_a(value)
	{
		cout << "B class 인자를 받는 생성자" << "\n";
	}

	~B() {
		cout << "B class 소멸자" << "\n";
	}

};

class parent {
private:
	int _value = 100;

public:
	parent() {
		cout << "parent class 기본생성자" << endl;
	}

	parent(int value)
		: _value(value)
	{
		cout << "parent class 인자를 받는 생성자" << endl;
	}

	~parent() {
		cout << "parent class 소멸자" << endl;
	}
};

class child : public parent {

public:
	child()
	{
		cout << "child class 기본 생성자" << endl;
	}

	child(int value)
	{
		cout << "child class 인자를 받는 생성자" << endl;
	}

	~child() {
		cout << "child class 소멸자" << endl;
	}
};


int main() {
	B b;
	
	cout << "\n";

	child a;
	
	//B bb(10);
	return 0;
}