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

//��ӽÿ� ���������ڸ� ����մϴ�.
//private �θ��� public, protected->private
//protected �θ��� public->protected, protected->protected, private->private;
//public �θ��� public->public, protected->protected, private->private
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

//����� �ϸ�
//Up casting(�ڽ��� ������ Ÿ���� �θ��� ������ Ÿ������ ����)
//�ڽ��� ������ Ÿ���� �θ��� ������ Ÿ������ ���� �� �ֽ��ϴ�.

	a = b; //Up casting o
	//b=a; //down casting x

	A& refb = b;   // ������
	cout << "refb._value1 = " << refb._value1 << endl;
	cout << "refb._value2 = " << refb._value2 << endl;


	A* pb = &b;   // ��������

	pb->_value1;
	pb->_value2;

	cout << "pb->_value1 = " << pb->_value1 << endl;
	cout << "pb->_value2 = " << pb->_value2 << endl;

	B* pbb = (B*)pb;   // �� ��쿡�� �ٿ� ĳ������ ����.
	cout << "pbb->_value1 = " << pbb->_value1 << endl;
	cout << "pbb->_value2 = " << pbb->_value2 << endl;
	cout << "pbb->_value3 = " << pbb->_value3 << endl;



	return 0;
}