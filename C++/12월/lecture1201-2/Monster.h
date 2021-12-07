#pragma once
#include <string>

using namespace std;

class Monster//추상클래스(순수가상함수를 최소 한 개 가지고 있는 클래스)
{
protected:
	string _name;
	int _health;
	int _defense;
	int _attack;

public:
	
	Monster(string name, int health, int defense, int attack)
		: _name(name), _health(health), _defense(defense), _attack(attack) {}

	int GetHealth() {
		return _health;
	}

	void SetHealth(int value) {
		_health = value;
	}

	int GetDefense() {
		return _defense;
	}

	string GetName() {
		return _name;
	}

	/*
	virtual void GetDamage(int attack) {
		_health -= (attack - _defense);
	}
	*/

	virtual void GetDamage(int attack) = 0;	// 순수 가상 함수

	virtual void Attack(Monster& ref);
};

