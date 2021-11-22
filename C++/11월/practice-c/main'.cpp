#include <iostream>
#include <string>

using namespace std;

class Pig {
public:
	int _weight;//멤버변수=속성(attribute,property)
	int _height;
	string _name;

public:
	Pig() {//기본 생성자(아무 인자도 받지 않는 생성자
		_name = "pig";
		cout << _name << " 객체가 기본 생성자 호출되어 생성" << "\n";
		_weight = 0;
		_height = 0;
	}

	Pig(string name, int weight, int height) {//인자를 받는 생성자
		cout << name << "객체가 인자 2개를 받는 생성자 호출되어 생성" << "\n";
		_name = name;
		_weight = weight;
		_height = height;
	}

	Pig(string name, int weight) {//인자를 받는 생성자
		cout << name << "객체가 인자 1개를 받는 생성자 호출되어 생성" << "\n";

		_name = name;
		_weight = weight;
		_height = 0;
	}

	~Pig() {
		cout << _name << "소멸자" << "\n";
	}

	//Set,Get 함수
	int GetWeight() {//멤버함수
		return _weight;
	}

	void SetWeight(int value) {
		_weight = value;
	}

	int GetHeight() {
		return _height;
	}
};

int main() {
	Pig pig;//기본 생성자가 없다는 것은 인자를 받지않고 객체를 생성하는 것을
	//허용하지 않겠다는 의미다.
	{
		Pig pig2("pig2", 100, 200); //로컬 변수(지역 변수, 자동 변수),로컬 변수는 중괄호 안에서만
		//영향을 끼친다.
		{
			Pig pig3("pig3", 200, 300);
			cout << "--------------" << "\n";
		}

		cout << "-----------" << "\n";
	}

	cout << "\n";

	Pig pig4("pig4", 300);

	cout << "------------" << "\n";
	return 0;
}
