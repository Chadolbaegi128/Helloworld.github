#pragma once
#include <string>

using namespace std;

class Monster//�߻�Ŭ����(abstract class)
{
protected:
	string _name;
	int _health;	// �����
	int _defense;	// ����
	int _attack;	// ���ݷ�

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

	virtual void GetDamage(int attackPower)=0;//���� ���� �Լ�

	virtual void Attack(Monster& enemy);//���� �Լ�
};

