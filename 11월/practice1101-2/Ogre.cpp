#include <iostream>
#include <string>
#include "Ogre.h"
#include "Dragon.h"
#include "Slaim.h"

using namespace std;

void Ogre::Attack(Ogre& enemy) {
	int calHealth = enemy.GetHealth() - (_attack - enemy.GetDefense());

	enemy.SetHealth(calHealth);

	cout << _name << "�� " << enemy.GetName() << "�� " << _attack
		<< "�� ���ݷ����� �����ؼ� " << enemy.GetName() << "�� ������� "
		<< enemy.GetHealth() << "���� �������." << "\n";
}

void Ogre::Attack(Dragon& enemy) {
	int calHealth = enemy.GetHealth() - (_attack - enemy.GetDefense());

	enemy.SetHealth(calHealth);

	cout << _name << "�� " << enemy.GetName() << "�� " << _attack
		<< "�� ���ݷ����� �����ؼ� " << enemy.GetName() << "�� ������� "
		<< enemy.GetHealth() << "���� �������." << "\n";
}

void Ogre::Attack(Slaim& enemy) {
	int calHealth = enemy.GetHealth() - (_attack - (enemy.GetDefense() + enemy.GetPhysicalRegist()));

	enemy.SetHealth(calHealth);

	cout << _name << "�� " << enemy.GetName() << "�� " << _attack
		<< "�� ���ݷ����� �����ؼ� " << enemy.GetName() << "�� ������� "
		<< enemy.GetHealth() << "���� �������." << "\n";
}
