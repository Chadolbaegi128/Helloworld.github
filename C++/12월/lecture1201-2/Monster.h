#pragma once
#include <string>

using namespace std;

class Monster//�߻�Ŭ����(���������Լ��� �ּ� �� �� ������ �ִ� Ŭ����)
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

	virtual void GetDamage(int attack) = 0;	// ���� ���� �Լ�

	virtual void Attack(Monster& ref);
};

