#include <iostream>
#include <string>

using namespace std;

class Car {
private:
	string _modelName;//�𵨸�
	int _wheelCount;//���� ����
	float _maxSpeed;//�ִ� �ӷ�

public:
	//�⺻������, ���ڸ� �޴� �����ڸ� ����ð�
	//��ü�� �����Ͽ� ��������� ���� ����غ�����

	Car() {
		cout << "�⺻ ������" << "\n";
		_modelName = "";
		_wheelCount = 0;
		_maxSpeed = 0;
	}

	Car(string modelName, int wheelCount, float maxSpeed) {
		cout << "���ڸ� �޴� ������" << "\n";
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
		cout << "�𵨸�: " << _modelName << "\n";
		cout << "��������: " << _wheelCount<<"��" << "\n";
		cout << "�ִ�ӷ�: " << _maxSpeed <<"km/h" << "\n";
	}

};

int main() {

	Car a("���׽ý�",4,360.5f);
	a.info();



	return 0;
}