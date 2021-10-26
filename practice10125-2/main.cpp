#include <iostream>

using namespace std;

class AlphaBet {
protected:
	int _value;
	int _value2;
	int _type; //��ü�� ������ Ÿ�� ���п�

public:
	AlphaBet(int value, int value2, int type)
		:_value(value), _value2(value2), _type(type) {
			}

	void printValue() {//�Ϲ��Լ�=>
		cout << "AlphaBet class _value= " << _value << "\n";
	}

	void printValue2() {
		cout << "AlphaBet class _value2= " << _value2 << "\n";
	}

	int GetType() {
		return _type;
	}
};

class A :public AlphaBet {
public:
	A(int value, int value2):AlphaBet(value, value2,0){}

	void printValue() {
		cout << "A class _value= " << _value << "\n";
	}

	void printValue2() {
		cout << "A class _value2=" << _value2 << "\n";
	}
};

class B : public AlphaBet {
public:
	B(int value, int value2):AlphaBet(value, value2, 1){}

	void printValue() {
		cout << "B class _value= " << _value << "\n";
	}

};

class C :public AlphaBet {
public:
	C(int value, int value2):AlphaBet(value,value2, 2){}

	void printValue() {
		cout << "C class _value= " << _value << "\n";
	}
};

//�����ε�(�Լ� �̸��� ������ ����)
void func(AlphaBet* pvalue) {//Ŭ������ ������ Ÿ�� "AlphaBet" ȣ���//���⼭�� �ٿ�ĳ�������� �����(�θ�Ŭ���� AlphaBet-> �ڽ�Ŭ���� A,B,C�� ������Ÿ���� �����)
	switch (pvalue->GetType()) {//switch�� ���ڿ� GetType�Լ��� ����Ű�� �Ű������� �־ 
	case 0://�ش� type���� �ִ� Ŭ������ ����� �����
		((A*)pvalue)->printValue();
		break;
	case 1:
		((B*)pvalue)->printValue();
		break;
	case 2:
		((C*)pvalue)->printValue();
		break;
	}
}

void func2(AlphaBet& ref) {
	switch (ref.GetType()) {
	case 0:
		((A&)ref).printValue2();
		break;

	case 1:
		((B&)ref).printValue2();
		break;

	case 2:
		((C&)ref).printValue2();
		break;
	}
}

int main() {
	A a(10, 15);
	B b(20, 25);
	C c(30, 35);

	func(&a);
	func(&b);
	func(&c);

	cout << "\n" << "\n";
	func2(a);
	func2(b);
	func2(c);

	return 0;
}