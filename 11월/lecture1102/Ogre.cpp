#include <iostream>
#include "Ogre.h"

// 데미지 처리함수
void Ogre::GetDamage(int attackPower) {
	cout << "Monster GetDamage" << endl;
	int damage = attackPower - _defense;

	if (damage < 0) {
		damage = 0;
	}

	_health -= damage;
}