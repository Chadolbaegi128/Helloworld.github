#include <iostream>
#include <string>

using namespace std;

class Tiger {
private:
	string _managecode; //관리번호, 멤버변수 객체의 속성
	int _sungbyul; //성별
	int _age; //나이
	float _weight; //체중


public://멤버변수는 철저히 감추고(private, protected)
	//함수를 통해 접근하도록 해라.

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

	void Setmanagecode(string value) {
		_managecode = value;
	}


	void Setgender(int value) {
		if (value == 0) {
			cout << "수컷" << endl;
			return;
		}
		else if (value == 1) {
			cout << "암컷" << endl;
			return;
		}
		else {
			value=0;
		}
	}

	int _Getgender() {
		return _sungbyul;
	}

	void Setage(int value) {
		_age = value;
	}

	void Setweight(float value) {
		if (value > 150) {
			_weight = 150;
		}
		else if (value < 300) {
			_weight = 300;
		}
		else {
			_weight = value;
		}
	}

	float Getweight() {
		return _weight;
	}
};

int main() {
	Tiger tiger;

	tiger.Eat();
	tiger.info();

	tiger.Setmanagecode("324522134");
	tiger.Setgender(1);
	tiger.Setage(30);
	tiger.Setweight(160.5);



	return 0;
}