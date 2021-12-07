#pragma once
#include <iostream>
#include <string>
#include "Monster.h"

using namespace std;

class Ork:public Monster{
public:
	Ork(string name, int health, int defense, int attack)
		: Monster(name, health, defense, attack) {}

	void GetDamage(int attack) override {
		cout << "Ork GetDamage" << endl;
		cout << "\n";
		_health -= (attack - (_defense));
	}
};

