#include <iostream>
#include <stdlib.h>

using namespace std;

class A {
private:
	int _value;
	int _value2;

public:
	A() :_value(0), _value2(0) {
		cout << "생성자" << "\n";
	}

	A(int value, int value2)
		:_value(value), _value2(value2) {
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

//C,C++
//malloc,calloc,realloc
//free

int main() {
	//new연산자로 객체를 동적할당할때
	//기본 생성자를 호출해준다.(인자를 받는 생성자로 호출할 때->A* pa=new A(10, 20);
	A* pa = new A;//동적객체(new 연산자)

	//delete 연산자로 객체를 해제할때
	//소멸자를 호출해준다.
	delete pa;//동적 객체 해제

	cout << "-------------------" << "\n";

	//malloc은 C언어에서 동적메모리를 할당할때 사용한다.
	//malloc으로 객체를 동적할당하면 생성자를 호출하지 않습니다.
	//malloc으로 객체를 동적생성하면 안된다.
	A* pma = (A*)malloc(sizeof(A));//동적 메모리 할당
	// 
	//free는 malloc 함수로 할당한 동적메모리를 지울 때 사용한다.
	//free를 사용하면 동적메모리를 해지시킨다.
		free(pma);// 해제
	
		cout << "-------------" << "\n";

		int* paa = (int*)malloc(sizeof(int) * 10);

		for (int i = 0; i < 10; i++)
		{
			paa[i] = i;
		}

		for (int i = 0; i < 10; i++)
		{
			cout << "paa[" << i << "] = "<<paa[i] << "\n";
		}

		free(paa);

	return 0;
}