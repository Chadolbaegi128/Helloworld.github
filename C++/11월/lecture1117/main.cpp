#include <iostream>

using namespace std;

class A {
public:
	int _value; //�Ϲ� �������
	int _value2;

	static int Count;//�����������(Ŭ��������)

	A(int value, int value2)
		:_value(value), _value2(value2){}

	void info()
	{
		cout << "_value = " << this->_value << "\n";//this �ڱ������� ������
		cout << "_value2 = " << this->_value2 << "\n";
		cout << "Count = " << this->Count << "\n";//�����������
	}

	static int GetCount() {//��������Լ�(Ŭ���� �Լ�)
		//_value=100;->��������Լ������� �Ϲݸ�������� ������ �� �����ϴ�.
		return Count;
	}
};

int A::Count = 0;//����������� �ʱ�ȭ

int main() {
	A a(10, 20);
	a.Count = 20;
	cout << &(a.Count) << "\n";//Count ����������� �ּҰ�

	A b(100, 20);
	b.Count = 300;
	cout << &(b.Count) << "\n";//Count ����������� �ּҰ�

	A::Count = 100;
	cout << "Count = " << A::GetCount() << "\n";

	a.info();

	A::Count = 200;

	b.info();

	return 0;
}