#pragma once
#include <iostream>
#include <string>

using namespace std;

class Animal {
protected://���� Ŭ������ ����� �κ��� ������ �� �ֵ��� protected ���������ڸ� �ִ´�.
	string _Managecode; //������ȣ
	float _Weight; //������
	int _Age; //����
	string _Gender; //����

public:
	Animal():_Managecode(""),_Weight(0.0f), _Age(0), _Gender(""){}

	Animal(string managecode, float weight, int age, string gender):
		_Managecode(managecode), _Weight(weight), _Age(age), _Gender(gender){}

	
	void SetWeight(float value) {
		_Weight = value;
	}

	float GetWeight() {
		return _Weight;
	}

	void SetAge(int value) {
		_Age = value;
	}
	
	int GetAge() {
		return _Age;
	}

	void info() {
		cout << "������ȣ: " << _Managecode << "\n";
		cout << "����: " << _Weight<<"kg"<< "\n";
		cout << "����: " << _Age << "��" << "\n";
		cout << "����: " << _Gender << "\n";
	}

};