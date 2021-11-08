#include <iostream>
#include "Dragon.h"

void Dragon::Attack(Monster& enemy) {
	/*
	int calHealth = enemy.GetHealth() - (_attack - enemy.GetDefense());

	enemy.SetHealth(calHealth);
	*/
	// ������ ó���ϴ� å���� ���� ������ �ѱ��.

	enemy.GetDamage(_attack + _fireAttack);

	cout << _name << "�� " << enemy.GetName() << "�� " << _attack
		<< "�� ���ݷ����� �����ؼ� " << enemy.GetName() << "�� ������� "
		<< enemy.GetHealth() << "���� �������" << endl;
}


// ������ ó���Լ�
void Dragon::GetDamage(int attackPower) {
	cout << "Monster GetDamage" << endl;
	int damage = attackPower - _defense;

	if (damage < 0) {
		damage = 0;
	}

	_health -= damage;
}