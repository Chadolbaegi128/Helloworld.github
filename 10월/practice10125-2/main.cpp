#include <iostream>

using namespace std;

class AlphaBet {
protected:
	int _value;
	int _value2;
	int _type; //객체의 데이터 타입 구분용

public:
	AlphaBet(int value, int value2, int type)
		:_value(value), _value2(value2), _type(type) {
			}

	void printValue() {//일반함수=>
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

//오버로딩(함수 이름을 여러개 지정)
void func(AlphaBet* pvalue) {//클래스형 데이터 타입 "AlphaBet" 호출됨//여기서는 다운캐스팅으로 변경됨(부모클래스 AlphaBet-> 자식클래스 A,B,C로 데이터타입이 변경됨)
	switch (pvalue->GetType()) {//switch문 인자에 GetType함수를 가리키는 매개변수를 넣어서 
	case 0://해당 type값이 있는 클래스의 결과를 출력함
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