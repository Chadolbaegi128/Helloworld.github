#include <iostream>

using namespace std;

class A {
private:
	int _value;
	int _value2;

public:
	A() :_value(0), _value2(0)
	{
		cout << "생성자" << "\n";
	}

	A(int value, int value2)
		:_value(value), _value2(value2)
	{
		cout << "생성자" << "\n";
	}

	~A() {
		cout << "소멸자" << "\n";
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

	cout << "객체의 갯수를 입력하세요: ";
	cin >> count;

	A* parray = new A[count]; //동적 객체 배열

	for (int i = 0; i < count; i++)
	{
		parray[i].SetValue(i);//객체에서 멤버에 접근할때는 '.'(period)연산자
		parray[i].SetValue2(i+2);
	}

	for (int i = 0; i < count; i++) {
		parray[i].info();
	}

	delete[] parray;

	return 0;
}