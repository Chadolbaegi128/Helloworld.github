#pragma once
#include <iostream>
#include <string>

using namespace std;

class Ogre;
class Dragon;

class Slaim {
private:
	string _name;
	int _health;//생명력
	int _defense;//방어력
	int _attack;//공격력
	int _physicalRegist;//물리공격 저항력

public:
	Slaim(string name, int health, int defense, int attack, int physicalRegist)
		:_name(name), _health(health), _defense(defense), _attack(attack), _physicalRegist(physicalRegist)
	{}

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

	int GetPhysicalRegist() { //물리공격 저항력 Get 함수
		return _physicalRegist;
	}

	void Attack(Ogre& enemy);
	

	void Attack(Dragon& enemy);
	

	void Attack(Slaim& enemy);
	
};

