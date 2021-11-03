#pragma once
#include <string>
#include "Monster.h"

using namespace std;

class Ogre: public Monster
{
protected:
	int _fireAttackRegist;

public:
	Ogre(string name, int health, int defense, int attack, int fireAttackRegist)
		: Monster(name, health, defense, attack), _fireAttackRegist(fireAttackRegist) {}

	void GetDamage(int attack) override;
};

