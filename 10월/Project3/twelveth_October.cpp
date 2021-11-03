#include <iostream>
#include <string>

using namespace std;

class Tiger {
private:
	string _managecode; //관리번호, 멤버변수 객체의 속성
	int _sungbyul; //성별 0: 숫컷, 1: 암컷.
	int _age; //나이
	float _weight; //체중


public://멤버변수는 철저히 감추고(private, protected)
	//함수를 통해 접근하도록 해라.

	Tiger() {
		_managecode = "000000";
		_sungbyul = 0;
		_age = 0;
		_weight = 0;
	}

	Tiger(string managecode, int sungbyul, int age, float weight) {
		cout << "인자를 받는 생성자" << endl;
		_managecode =managecode;
		_sungbyul = sungbyul;
		_age = age;
		_weight = weight;
	}

	Tiger(string managecode)
		: _managecode(managecode), _sungbyul(0), _age(0), _weight(0)
	{
		cout << "managecode만 받는 생성자" << endl;

	}

	void Eat() {//멤버함수 객체의 행동
		cout << "호랑이가 고기를 먹는다." << endl;
	}


	void info()
	{//멤버함수
		cout << "객체 tiger의 관리번호: " << _managecode << endl;
		cout << "객체 tiger의 성별: " << _sungbyul << endl;
		cout << "객체 tiger의 나이: " << _age << endl;
		cout << "객체 tiger의 체중: " << _weight << "kg" << endl;

	}

	void managecode(string value) {
		_managecode = value;
	}

	

	void age(int value) {
		_age = value;
	}

	void weight(float value) {
		if (value < 150) {
			_weight = 150;
		}
		else if (value > 300) {
			_weight = 300;
		}
		else {
			_weight = value;
		}
	}

	
};

int main() {
	Tiger tiger;
	
	tiger.Eat();
	tiger.info();

	cout << endl;

	Tiger tiger2("3422", 1, 19, 140.5f);

	tiger2.Eat();
	tiger2.info();
	
	cout << endl;

	Tiger tiger3("3333");

	tiger3.info();
	
	

	return 0;
}