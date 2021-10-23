#include <iostream>

using namespace std;

class A {
public:
	int _value1;
	int _value2;

public:
	A(): _value1(10), _value2(20){}
	A(int value1, int value2):
		_value1(value1), _value2(value2){}
};

//부모클래스에서 자식클래스로 상속시에 접근제어자를 사용합니다.
//부모클래스에서 private로 파생된 객체를 상속받을시: (자식클래스)public, protected 접근제어자->부모클래스의 private로 접근
//부모클래스에서 protected로 파생된 객체 상속받을시:
// (자식클래스)public->(부모클래스)protected, (자식클래스)protected->(부모클래스)protected, (자식클래스)private->(부모클래스)private
//부모클래스에서 public로 파생된 객체 상속받을시:
// (자식클래스)public->(부모클래스)public, (자식클래스)protected->(부모클래스)protected, (자식클래스)private->(부모클래스)private

class B : public A {
public:
	int _value3;

public:
	B(): A(10,20), _value3(30){}
};

int main() {
	A a;
	B b;

	a._value1 = 20;
	a._value2 = 40;

	b._value1 = 30;
	b._value2 = 100;
	b._value3 = 200;

//상속을 하면
//Upcasting(자식의 데이터 타입을 부모클래스의 데이터 타입으로 변경)
//casting->데이터 타입을 변경하는 것
//자식의 데이터 타입을 부모의 데이터 타입으로 받을 수 있습니다.

	a = b;//업캐스팅(Upcasting) 가능
	//b=a; //다운캐스팅(Downcasting) 불가능(부모의 데이터 타입을 자식클래스의 그것으로 변경
	//일반적인 상황에서는 권장하지 않음->빌드오류 및 데이터 손실이 발생할 수 있음)

	A& refb = b;//참조형 변수
	cout << "refb._value1 = " << refb._value1 << "\n";
	cout << "refb._value2 = " << refb._value2 << "\n";

	A* pb = &b;//포인터형 변수(주소값을 저장)

	pb->_value1;
	pb->_value2;

	cout << "pb->_value1 = " << pb->_value1 << "\n";
	cout << "pb->_value2 = " << pb->_value2 << "\n";

	B* pbb = (B*)pb;// 포인터형 변수일 경우에는 부모클래스의 다운캐스팅이 허용됨.
	cout << "pbb->_value1 = " << pbb->_value1 << "\n";
	cout << "pbb->_value2 = " << pbb->_value2 << "\n";
	cout << "pbb->_value3 = " << pbb->_value3 << "\n";

	return 0;
}