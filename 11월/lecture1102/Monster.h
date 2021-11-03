#pragma once
#include <string>

using namespace std;

class Monster//추상클래스(abstract class)
{
protected:
	string _name;
	int _health;	// 생명력
	int _defense;	// 방어력
	int _attack;	// 공격력

public:
	Monster(string name, int health, int defense, int attack)
		: _name(name), _health(health), _defense(defense), _attack(attack) {}

	void SetHealth(int value) {
		_health = value;
	}

	int GetHealth() {
		return _health;
	}

	int GetDefense() {
		return _defense;
	}

	string GetName() {
		return _name;
	}

	virtual void GetDamage(int attackPower)=0;//순수 가상 함수

	virtual void Attack(Monster& enemy);//가상 함수
};

