#pragma once
#include <iostream>
#include <string>
#include "Monster.h"

using namespace std;

class Dragon;
class Ork;

class Slaim:public Monster{
private:
	int _physicalRegist;	// 물리 공격 저항력

public:
	Slaim(string name, int health, int defense, int attack, int physicalRegist)
		: Monster(name, health, defense, attack), _physicalRegist(physicalRegist) {}


	void GetDamage(int attack) override {
		cout << "Slaim GetDamage" << endl;
		cout << "\n";
		_health -= (attack - (_defense + _physicalRegist));
	}
};

