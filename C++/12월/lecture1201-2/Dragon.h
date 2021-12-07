#pragma once
#include <iostream>
#include <string>
#include "Monster.h"

using namespace std;

class Slaim;
class Ork;

class Dragon:public Monster{
private:
	int _fireAttack;	// È­¿°°ø°Ý

public:
	

	Dragon(string name, int health, int defense, int attack, int fireAttack)
		: Monster(name, health, defense, attack), _fireAttack(fireAttack) {}

	

	void Init(string name, int health, int defense, int attack, int fireAttack) {
		_name = name;
		_health = health;
		_defense = defense;
		_attack = attack;
		_fireAttack = fireAttack;
	}

	void GetDamage(int attack) override {
		cout << "Ork GetDamage" << endl;
		cout << "\n";
		_health -= (attack - (_defense));
	}


	void Attack(Monster& ref);

	void FireAttack(Dragon& ref);

	void FireAttack(Slaim& ref);

	void FireAttack(Ork& ref);

};

