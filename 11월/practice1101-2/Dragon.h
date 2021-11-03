#pragma once
#include <iostream>
#include <string>

using namespace std;

class Ogre;
class Slaim;

class Dragon {
private:
	string _name;
	int _health;
	int _defense;
	int _attack;

public:
	Dragon(string name, int health, int defense, int attack)
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

