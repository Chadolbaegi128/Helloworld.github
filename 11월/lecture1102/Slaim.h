#pragma once
#include <string>
#include "Monster.h"

using namespace std;

class Ogre;
class Dragon;

class Slaim:public Monster
{
private:
	int _physicalRegist;	// �������� ���׷�

public:
	Slaim(string name, int health, int defense, int attack, int physicalRegist)
		: Monster(name, health, defense, attack), _physicalRegist(physicalRegist) {}

	int GetPhysicalRegist() {	// �������� ���׷� Get �Լ�
		return _physicalRegist;
	}

	void GetDamage(int attackPower) override;
		
	
};

