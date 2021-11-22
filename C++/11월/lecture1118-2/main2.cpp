#include <iostream>

using namespace std;

class A {
private:
	int _value;
	int _value2;

public:
	A() :_value(0), _value2(0)
	{
		cout << "������" << "\n";
	}

	A(int value, int value2)
		:_value(value), _value2(value2)
	{
		cout << "������" << "\n";
	}

	~A() {
		cout << "�Ҹ���" << "\n";
	}

	void SetValue(int value) {
		_value = value;
	}

	void SetValue2(int value) {
		_value2 = value;
	}

	void info() {
		cout << "_value = " << _value << "\n";
		cout << "_value2 = " << _value2 << "\n";
	}
};

int main() {
	int count = 0;

	cout << "��ü�� ������ �Է��ϼ���: ";
	cin >> count;

	A* parray = new A[count]; //���� ��ü �迭

	for (int i = 0; i < count; i++)
	{
		parray[i].SetValue(i);//��ü���� ����� �����Ҷ��� '.'(period)������
		parray[i].SetValue2(i+2);
	}

	for (int i = 0; i < count; i++) {
		parray[i].info();
	}

	delete[] parray;

	return 0;
}