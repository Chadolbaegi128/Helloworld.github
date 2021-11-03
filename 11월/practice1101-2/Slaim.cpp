#include <iostream>
#include <string>
#include "Slaim.h"
#include "Dragon.h"
#include "Ogre.h"

using namespace std;

void Slaim::Attack(Ogre & enemy) {
	int calHealth = enemy.GetHealth() - (_attack - enemy.GetDefense());

	enemy.SetHealth(calHealth);

	cout << _name << "이 " << enemy.GetName() << "을 " << _attack
		<< "의 공격력으로 공격해서 " << enemy.GetName() << "의 생명력을 "
		<< enemy.GetHealth() << "으로 만들었다." << "\n";
}

void Slaim::Attack(Dragon& enemy) {
	int calHealth = enemy.GetHealth() - (_attack - enemy.GetDefense());

	enemy.SetHealth(calHealth);

	cout << _name << "이 " << enemy.GetName() << "을 " << _attack
		<< "의 공격력으로 공격해서 " << enemy.GetName() << "의 생명력을 "
		<< enemy.GetHealth() << "으로 만들었다." << "\n";
}

void Slaim::Attack(Slaim& enemy) {
	int calHealth = enemy.GetHealth() - (_attack - (enemy.GetDefense() + enemy.GetPhysicalRegist()));

	enemy.SetHealth(calHealth);

	cout << _name << "이 " << enemy.GetName() << "을 " << _attack
		<< "의 공격력으로 공격해서 " << enemy.GetName() << "의 생명력을 "
		<< enemy.GetHealth() << "으로 만들었다. " << "\n";
}