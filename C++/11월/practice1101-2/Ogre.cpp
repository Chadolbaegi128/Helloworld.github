#include <iostream>
#include <string>
#include "Ogre.h"
#include "Dragon.h"
#include "Slaim.h"

using namespace std;

void Ogre::Attack(Ogre& enemy) {
	int calHealth = enemy.GetHealth() - (_attack - enemy.GetDefense());

	enemy.SetHealth(calHealth);

	cout << _name << "이 " << enemy.GetName() << "을 " << _attack
		<< "의 공격력으로 공격해서 " << enemy.GetName() << "의 생명력을 "
		<< enemy.GetHealth() << "으로 만들었다." << "\n";
}

void Ogre::Attack(Dragon& enemy) {
	int calHealth = enemy.GetHealth() - (_attack - enemy.GetDefense());

	enemy.SetHealth(calHealth);

	cout << _name << "이 " << enemy.GetName() << "을 " << _attack
		<< "의 공격력으로 공격해서 " << enemy.GetName() << "의 생명력을 "
		<< enemy.GetHealth() << "으로 만들었다." << "\n";
}

void Ogre::Attack(Slaim& enemy) {
	int calHealth = enemy.GetHealth() - (_attack - (enemy.GetDefense() + enemy.GetPhysicalRegist()));

	enemy.SetHealth(calHealth);

	cout << _name << "이 " << enemy.GetName() << "을 " << _attack
		<< "의 공격력으로 공격해서 " << enemy.GetName() << "의 생명력을 "
		<< enemy.GetHealth() << "으로 만들었다." << "\n";
}
