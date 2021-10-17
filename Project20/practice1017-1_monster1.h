#pragma once//헤더파일의 중복을 방지하기 위한 코드
#include <iostream>

using namespace std;

class Monster {
private:
	int _health; //멤버변수
	int _attack; 
	int _defence;

public:
	Monster(): _health(0),_attack(0), _defence(0) {
		};

	inline void SetHealth(int value) {//get,set함수를 만드는 이유
		                              //클래스에 있는 멤버 변수를 접근하게 또는 접근하지 못하게 구분 목적
		if (value < 0) {
			_health = 0;
		}
		else if (value > 250) {
			_health = 300;
		}
		else {
			_health = value;
		}
	}

	int GetHealth(int value) {
		return _health;
	}

	inline void SetAttack(int value) {
		if (value < 0) {
			_attack = 0;
		}
		else if (value > 400) {
			_attack = 400;
		}
		else {
			_attack = value;
		}

	}

	int GetAttack(int value) {
		return _attack;
	}

	inline void SetDefence(int value) {
		if(value < 0) {
			_defence = 0;
		}
		else if (value > 300) {
			_defence = 300;
		}
		else {
			_defence = value;
		}
	}

	int GetDefence(int value) {
		return _defence;
	}

	void info();

};

