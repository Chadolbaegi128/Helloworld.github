#pragma once
#include <iostream>
#include <string>

using namespace std;

class Animal {
protected://하위 클래스의 공통된 부분이 접근할 수 있도록 protected 접근제어자를 넣는다.
	string _Managecode; //관리번호
	float _Weight; //몸무게
	int _Age; //나이
	string _Gender; //성별

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
		cout << "관리번호: " << _Managecode << "\n";
		cout << "무게: " << _Weight<<"kg"<< "\n";
		cout << "나이: " << _Age << "세" << "\n";
		cout << "성별: " << _Gender << "\n";
	}

};