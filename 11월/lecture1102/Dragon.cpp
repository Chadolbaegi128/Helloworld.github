#include <iostream>
#include "Dragon.h"

void Dragon::Attack(Monster& enemy) {
	/*
	int calHealth = enemy.GetHealth() - (_attack - enemy.GetDefense());

	enemy.SetHealth(calHealth);
	*/
	// 데미지 처리하는 책임을 맞은 놈한테 넘긴다.

	enemy.GetDamage(_attack + _fireAttack);

	cout << _name << "이 " << enemy.GetName() << "을 " << _attack
		<< "의 공격력으로 공격해서 " << enemy.GetName() << "의 생명력을 "
		<< enemy.GetHealth() << "으로 만들었다" << endl;
}


// 데미지 처리함수
void Dragon::GetDamage(int attackPower) {
	cout << "Monster GetDamage" << endl;
	int damage = attackPower - _defense;

	if (damage < 0) {
		damage = 0;
	}

	_health -= damage;
}