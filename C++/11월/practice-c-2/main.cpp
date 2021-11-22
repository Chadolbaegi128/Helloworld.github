#include <iostream>
#include <string>

using namespace std;

class Car {
private:
	string _modelName;//모델명
	int _wheelCount;//바퀴 갯수
	float _maxSpeed;//최대 속력

public:
	//기본생성자, 인자를 받는 생성자를 만드시고
	//객체를 생성하여 멤버변수의 값을 출력해보세요

	Car() {
		cout << "기본 생성자" << "\n";
		_modelName = "";
		_wheelCount = 0;
		_maxSpeed = 0;
	}

	Car(string modelName, int wheelCount, float maxSpeed) {
		cout << "인자를 받는 생성자" << "\n";
		_modelName = modelName;
		_wheelCount = wheelCount;
		_maxSpeed = maxSpeed;
	}

	void SetmodelName(string modelName) {
		_modelName = modelName;
	}

	string GetmodelName() {
		return _modelName;
	}

	void SetwheelCount(int wheelCount) {
		_wheelCount = wheelCount;
	}

	int GetwheelCount() {
		return _wheelCount;
	}

	void SetmaxSpeed(float maxSpeed) {
		_maxSpeed = maxSpeed;
	}

	int GetmaxSpeed() {
		return _maxSpeed;
	}

	void info() {
		cout << "모델명: " << _modelName << "\n";
		cout << "바퀴갯수: " << _wheelCount<<"개" << "\n";
		cout << "최대속력: " << _maxSpeed <<"km/h" << "\n";
	}

};

int main() {

	Car a("제네시스",4,360.5f);
	a.info();



	return 0;
}