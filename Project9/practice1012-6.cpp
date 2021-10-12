#include <iostream>
#include <string>

using namespace std;

class Tiger {
private:
	string _managecode;
	string _gender;
	int _age;
	float _weight;

public:
	Tiger(string managecode)
		: _managecode(managecode), _gender(""), _age(0), _weight(0)
	{
		cout << _managecode << "생성자" << endl;}

	~Tiger() {//소멸자(destructor)
		cout << _managecode << "소멸자" << endl;
	}

	void SetManagecode(string value) {
		_managecode = value;
	}

	void info() {//멤버함수
		cout << "관리번호: " << _managecode << endl;
		cout << "성별: " << _gender << endl;
		cout << "나이: " << _age << endl;
		cout << "체중: " << _weight << endl;
	}
};

int main() {
	Tiger tiger("tiger");//객체가 만들어질때 자동으로 호출 되어지는 함수 //생성자

	{cout << endl;
	Tiger tiger2("tiger2"); }//로컬객체, 자동변수

	cout << endl;
	Tiger tiger3("tiger3");

	return 0;
}