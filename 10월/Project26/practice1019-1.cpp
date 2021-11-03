#include <iostream>

using namespace std;

class A {
public:
    int _value1;
    int _value2;

    A(int value1, int value2) : _value1(value1), _value2(value2) {
        cout << "인자를 받는 생성자" << endl;
    }

    A(A& ref) {   // 복사생성자, 일반적인 경우에는 안만들어도 됨.
        cout << "복사생성자" << endl;
        _value1 = ref._value1;
        _value2 = ref._value2;
    }


    ~A() {
        cout << "소멸자" << endl;
    }

    void info() {
        cout << "_value1 = " << _value1 << endl;
        cout << "_vlaue2 = " << _value2 << endl;
    }
};

int main() {
	
    // 생성자
  // 기본생성자
  // 인자를 받는 생성자
  // 자기자신의 데이타 타입을 인자로 받는 생성자(복사생성자)

    A a(10, 10);

    A b(a); // 복사생성자 생성
    A c = a;

    b.info();
    cout << endl;
    c.info();

	return 0;
}