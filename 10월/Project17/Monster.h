#pragma once //헤더파일의 중복을 방지하기 위한 코드//비주얼 스튜디오 프로그램에서만 적용됨
#include <iostream>

using namespace std;

class Monster {
private:
	int _health; //멤버변수
	int _attack;
	int _defence;

public:
	Monster(int health, int attack, int defence)
		: _health(health), _attack(attack), _defence(defence) {
	};

	inline void SetHealth(int value);//인라인 함수 선언부// 클래스에 인라인 함수 구현부를 작성할 경우 굳이 작성할 필요는 없다.
	inline void SetAttack(int value);
	inline void Setdefence(int value);


	int GetHealth(int value) {
		return _health;
	}
	int GetAttack(int value) {
		return _attack;
	}
	int Getdefence(int value) {
		return _defence;
	};

	 
	void Attack();
	void Walk(); //멤버함수 // 함수의 원형(Prototype)
					//'Attack'함수가 아직 구현이 되지 않았다. 선언만 되어있음.

	void Speak();

	void info();
};

inline void Monster::Setdefence(int value) {
	if (value < 0) {
		_defence = 0;
	}
	else if (value > 300) {
		_defence = 300;
	}
	else {
		_defence = value;
	}
}

inline void Monster::SetAttack(int value) {
	if (value < 0) {
		_attack = 0;
	}
	else if (value > 150) {
		_attack = 100;
	}
	else {
		_attack = value;
	}
}

inline void Monster::SetHealth(int value) {//인라인함수 구현부//인라인함수 선언부만 클래스에 있을 경우 외부에 별도로 작성해야 한다.
	if (value < 0) {
		_health = 0;
	}
	else if (value > 100) {
		_health = 100;
	}
	else {
		_health = value;
	}
}