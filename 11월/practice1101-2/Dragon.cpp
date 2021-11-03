#include <iostream>
#include <string>
#include "Dragon.h"
#include "Ogre.h"
#include "Slaim.h"

using namespace std;


void Dragon::Attack(Ogre& enemy) {
	int calHealth = enemy.GetHealth() - (_attack - enemy.GetDefense());

	enemy.SetHealth(calHealth);

	cout << _name << "�� " << enemy.GetName() << "�� " << _attack
		<< "�� ���ݷ����� �����ؼ� " << enemy.GetName() << "�� ������� "
		<< enemy.GetHealth() << "���� �������." << "\n";
}

void Dragon::Attack(Dragon& enemy) {
	int calHealth = enemy.GetHealth() - (_attack - enemy.GetDefense());

	enemy.SetHealth(calHealth);

	cout << _name << "�� " << enemy.GetName() << "�� " << _attack
		<< "�� ���ݷ����� �����ؼ� " << enemy.GetName() << "�� ������� "
		<< enemy.GetHealth() << "���� �������." << "\n";
}

void Dragon::Attack(Slaim& enemy) {
	int calHealth = enemy.GetHealth() - (_attack - (enemy.GetDefense() + enemy.GetPhysicalRegist()));

	enemy.SetHealth(calHealth);

	cout << _name << "�� " << enemy.GetName() << "�� " << _attack
		<< "�� ���ݷ����� �����ؼ� " << enemy.GetName() << "�� ������� "
		<< enemy.GetHealth() << "���� �������." << "\n";
}
