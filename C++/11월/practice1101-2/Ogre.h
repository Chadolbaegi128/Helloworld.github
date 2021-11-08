#pragma once
#include <iostream>
#include <string>

using namespace std;

class Dragon;
class Slaim;

class Ogre {
private:
	string _name;//������ �̸�
	int _health;//������ ü��
	int _defense;//������ ����
	int _attack;//������ ���ݷ�

public:
	Ogre(string name, int health, int defense, int attack)
		:_name(name), _health(health), _defense(defense), _attack(attack) {}

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

	void Attack(Ogre& enemy);

	void Attack(Dragon& enemy);

	void Attack(Slaim& enemy);
};

