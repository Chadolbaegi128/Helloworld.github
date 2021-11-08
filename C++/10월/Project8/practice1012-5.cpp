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
	Tiger(string managecode, string gender, int age, float weight) {
		_managecode = managecode;
		_gender = gender;
		_age = age;
		_weight = weight;
	};


	void info() {
		cout << "관리번호: " << _managecode << endl;
		cout << "성별: " << _gender << endl;
		cout << "나이: " << _age << endl;
		cout << "체중: " << _weight << endl;
	}

	
	void Setmanagecode(string value) {
		_managecode = value;
	}

	
	void Setgender(string value) {
		_gender = value;
	}
		

	void SetAge(int value) {
		if (value < 3) {
			_age = 1;
		}
		else if (value > 12) {
			_age = 12;
		}
		else {
			_age = value;
		}
	}


	void SetWeight(float value) {
		if (value < 150) {
			_weight = 150;
		}
		else if (value > 300) {
			_weight = 300;
		}
		else {
			_weight = value;
		}
	};

	
};

int main() {
	Tiger tiger("343434", "암컷", 10, 150.4f);

	tiger.info();



	return 0;
};