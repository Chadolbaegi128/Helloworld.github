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

//상속시에 접근제어자를 사용합니다.
//private 부모의 public, protected->private
//protected 부모의 public->protected, protected->protected, private->private;
//public 부모의 public->public, protected->protected, private->private
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
//Up casting(자식의 데이터 타입을 부모의 데이터 타입으로 변경)
//자식의 데이터 타입을 부모의 데이터 타입으로 받을 수 있습니다.

	a = b; //Up casting o
	//b=a; //down casting x

	A& refb = b;   // 참조형
	cout << "refb._value1 = " << refb._value1 << endl;
	cout << "refb._value2 = " << refb._value2 << endl;


	A* pb = &b;   // 포인터형

	pb->_value1;
	pb->_value2;

	cout << "pb->_value1 = " << pb->_value1 << endl;
	cout << "pb->_value2 = " << pb->_value2 << endl;

	B* pbb = (B*)pb;   // 이 경우에는 다운 캐스팅이 허용됨.
	cout << "pbb->_value1 = " << pbb->_value1 << endl;
	cout << "pbb->_value2 = " << pbb->_value2 << endl;
	cout << "pbb->_value3 = " << pbb->_value3 << endl;



	return 0;
}