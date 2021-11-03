#include <iostream>
#include <string>
#include "Slaim.h"
#include "Dragon.h"
#include "Ogre.h"

using namespace std;

void Slaim::Attack(Ogre & enemy) {
	int calHealth = enemy.GetHealth() - (_attack - enemy.GetDefense());

	enemy.SetHealth(calHealth);

	cout << _name << "�� " << enemy.GetName() << "�� " << _attack
		<< "�� ���ݷ����� �����ؼ� " << enemy.GetName() << "�� ������� "
		<< enemy.GetHealth() << "���� �������." << "\n";
}

void Slaim::Attack(Dragon& enemy) {
	int calHealth = enemy.GetHealth() - (_attack - enemy.GetDefense());

	enemy.SetHealth(calHealth);

	cout << _name << "�� " << enemy.GetName() << "�� " << _attack
		<< "�� ���ݷ����� �����ؼ� " << enemy.GetName() << "�� ������� "
		<< enemy.GetHealth() << "���� �������." << "\n";
}

void Slaim::Attack(Slaim& enemy) {
	int calHealth = enemy.GetHealth() - (_attack - (enemy.GetDefense() + enemy.GetPhysicalRegist()));

	enemy.SetHealth(calHealth);

	cout << _name << "�� " << enemy.GetName() << "�� " << _attack
		<< "�� ���ݷ����� �����ؼ� " << enemy.GetName() << "�� ������� "
		<< enemy.GetHealth() << "���� �������. " << "\n";
}