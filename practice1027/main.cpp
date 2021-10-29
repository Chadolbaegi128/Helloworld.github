#include <iostream>

using namespace std;

class A {
private:
	int _value = 100;

public:
	A() {
		cout << "A class �⺻������" << "\n";
	}

	A(int value) :_value(value)
	{
		cout << "A class ���ڸ� �޴� ������" << "\n";
	}

	~A() {
		cout << "A class �Ҹ���" << "\n";
	}
};

class B {
private:
	A _a;//����

public:
	B()
	{
		cout << "B class �⺻������" << "\n";
	}

	B(int value) :_a(value)
	{
		cout << "B class ���ڸ� �޴� ������" << "\n";
	}

	~B() {
		cout << "B class �Ҹ���" << "\n";
	}

};

class parent {
private:
	int _value = 100;

public:
	parent() {
		cout << "parent class �⺻������" << endl;
	}

	parent(int value)
		: _value(value)
	{
		cout << "parent class ���ڸ� �޴� ������" << endl;
	}

	~parent() {
		cout << "parent class �Ҹ���" << endl;
	}
};

class child : public parent {

public:
	child()
	{
		cout << "child class �⺻ ������" << endl;
	}

	child(int value)
	{
		cout << "child class ���ڸ� �޴� ������" << endl;
	}

	~child() {
		cout << "child class �Ҹ���" << endl;
	}
};


int main() {
	B b;
	
	cout << "\n";

	child a;
	
	//B bb(10);
	return 0;
}