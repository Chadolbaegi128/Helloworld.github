#pragma once
#include <iostream>
#include <string>

using namespace std;

class Dragon;
class Slaim;

class Ogre {
private:
	string _name;//몬스터의 이름
	int _health;//몬스터의 체력
	int _defense;//몬스터의 방어력
	int _attack;//몬스터의 공격력

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

