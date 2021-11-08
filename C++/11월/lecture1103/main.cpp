#include <iostream>

using namespace std;

class A {//사용자정의 데이터 타입=>클래스 타입

private:
	int _value;
	int _value2;
	
public:
	A(int value, int value2)
		:_value(value), _value2(value2){}

	void info() {
		cout << "_value = " << _value << "\n";
		cout << "_value2 = " << _value2 << "\n";
	}

	A operator*(A& ref) {//연산자 오버로딩, 'operator'옆의 연산자는 형식적인 의미고
						//중괄호내에 있는 것이 실질적인 의미를 가지고 있음(덧셈을 연산자 오버로딩해서 곱셈으로 만들 수는 있지만 권장하지 않음)
		A temp(_value * ref._value, _value2 * ref._value2);

		return temp;
	}

	A operator+(A& ref) {
		A temp(_value + ref._value, _value2 + ref._value2);
		
		return temp;
	}

	A operator-(A& ref) {
		A temp(_value - ref._value, _value2 - ref._value2);

		return temp;
	}

	A operator/(A& ref) {
		A temp(_value / ref._value, _value2 / ref._value2);

		return temp;
	}
};

int main() {
	A a(10, 20);
	A b(20, 30);

	A c(0, 0);

	c = a * b;//함수호출이랑 비슷한 방식
	c = a.operator*(b);

	c.info();

	c = a + b;
	c = a.operator+(b);

	c.info();

	c = a - b;
	c = a.operator-(b);

	c.info();

	c = a / b;
	c = a.operator/(b);
		
	c.info();
	


	return 0;
}