#include <iostream>

using namespace std;

class A {
public:
	int _value; //일반 멤버변수
	int _value2;

	static int Count;//정적멤버변수(클래스변수)

	A(int value, int value2)
		:_value(value), _value2(value2){}

	void info()
	{
		cout << "_value = " << this->_value << "\n";//this 자기참조형 포인터
		cout << "_value2 = " << this->_value2 << "\n";
		cout << "Count = " << this->Count << "\n";//정적멤버변수
	}

	static int GetCount() {//정적멤버함수(클래스 함수)
		//_value=100;->정적멤버함수에서는 일반멤버변수를 접근할 수 없습니다.
		return Count;
	}
};

int A::Count = 0;//정적멤버변수 초기화

int main() {
	A a(10, 20);
	a.Count = 20;
	cout << &(a.Count) << "\n";//Count 정적멤버변수 주소값

	A b(100, 20);
	b.Count = 300;
	cout << &(b.Count) << "\n";//Count 정적멤버변수 주소값

	A::Count = 100;
	cout << "Count = " << A::GetCount() << "\n";

	a.info();

	A::Count = 200;

	b.info();

	return 0;
}