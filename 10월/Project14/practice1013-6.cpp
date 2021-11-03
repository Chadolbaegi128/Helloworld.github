#include <iostream>
#include <string>

using namespace std;

class Math {
private:
	const int F;//const형 멤버변수
	int& ref;//참조형 변수

public:
	Math(int f, int &ref):F(f), ref(ref) {//생성자 초기화 리스트를 통해 참조형 변수를 초기화 시킴.
		cout << "const형 멤버변수, 참조형 변수" << "\n";
		cout << "인자가 있는 생성자" << "\n";
	}

	~Math() {
		cout << "소멸자" << "\n";
	}

	void info() {
		cout << "const형 멤버변수의 값은 " << F << "\n";
		cout << "참조형 변수값은 " << ref << "\n";//ref=>레퍼런스 또는 별칭이라고 한다. 
			}

	void SetRef(int value) {
		ref = value;
	}

};

int main() {
	int F;//참조형 변수에 값을 집어넣을려면 먼저 초기화를 시켜야 한다.
	F = 500;

	Math grade(F, F);
	grade.info();
	cout << "\n";

	grade.SetRef(2000);
	grade.info();
	cout << "\n";

	{Math grade(2000, F);
	grade.SetRef(F);
	cout << "\n";
	grade.info();

	}
	cout << "\n";

	cout << "const형 멤버변수의 값은 " << F << "\n";
}