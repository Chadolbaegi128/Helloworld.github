#pragma once
#include <string>
#include "Monster.h"

using namespace std;

class Dragon: public Monster
{
protected:
	int _fireAttack;

public:
	Dragon(string name, int health, int defense, int attack, int fireAttack)
		:Monster(name, health, defense, attack), _fireAttack(fireAttack){}

	void Attack(Monster& ref) override;
	void GetDamage(int attack) override;
};

