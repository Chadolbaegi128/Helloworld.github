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

//�θ�Ŭ�������� �ڽ�Ŭ������ ��ӽÿ� ���������ڸ� ����մϴ�.
//�θ�Ŭ�������� private�� �Ļ��� ��ü�� ��ӹ�����: (�ڽ�Ŭ����)public, protected ����������->�θ�Ŭ������ private�� ����
//�θ�Ŭ�������� protected�� �Ļ��� ��ü ��ӹ�����:
// (�ڽ�Ŭ����)public->(�θ�Ŭ����)protected, (�ڽ�Ŭ����)protected->(�θ�Ŭ����)protected, (�ڽ�Ŭ����)private->(�θ�Ŭ����)private
//�θ�Ŭ�������� public�� �Ļ��� ��ü ��ӹ�����:
// (�ڽ�Ŭ����)public->(�θ�Ŭ����)public, (�ڽ�Ŭ����)protected->(�θ�Ŭ����)protected, (�ڽ�Ŭ����)private->(�θ�Ŭ����)private

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
//Upcasting(�ڽ��� ������ Ÿ���� �θ�Ŭ������ ������ Ÿ������ ����)
//casting->������ Ÿ���� �����ϴ� ��
//�ڽ��� ������ Ÿ���� �θ��� ������ Ÿ������ ���� �� �ֽ��ϴ�.

	a = b;//��ĳ����(Upcasting) ����
	//b=a; //�ٿ�ĳ����(Downcasting) �Ұ���(�θ��� ������ Ÿ���� �ڽ�Ŭ������ �װ����� ����
	//�Ϲ����� ��Ȳ������ �������� ����->������� �� ������ �ս��� �߻��� �� ����)

	A& refb = b;//������ ����
	cout << "refb._value1 = " << refb._value1 << "\n";
	cout << "refb._value2 = " << refb._value2 << "\n";

	A* pb = &b;//�������� ����(�ּҰ��� ����)

	pb->_value1;
	pb->_value2;

	cout << "pb->_value1 = " << pb->_value1 << "\n";
	cout << "pb->_value2 = " << pb->_value2 << "\n";

	B* pbb = (B*)pb;// �������� ������ ��쿡�� �θ�Ŭ������ �ٿ�ĳ������ ����.
	cout << "pbb->_value1 = " << pbb->_value1 << "\n";
	cout << "pbb->_value2 = " << pbb->_value2 << "\n";
	cout << "pbb->_value3 = " << pbb->_value3 << "\n";

	return 0;
}