#pragma once
#include <string>
#include "Monster.h"

using namespace std;

class Ogre;
class Dragon;

class Slaim:public Monster
{
private:
	int _physicalRegist;	// 물리공격 저항력

public:
	Slaim(string name, int health, int defense, int attack, int physicalRegist)
		: Monster(name, health, defense, attack), _physicalRegist(physicalRegist) {}

	int GetPhysicalRegist() {	// 물리공격 저항력 Get 함수
		return _physicalRegist;
	}

	void GetDamage(int attackPower) override;
		
	
};

