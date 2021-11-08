#pragma once
#include <iostream>
#include <string>

using namespace std;

class Ogre;
class Dragon;

class Slaim {
private:
	string _name;
	int _health;//�����
	int _defense;//����
	int _attack;//���ݷ�
	int _physicalRegist;//�������� ���׷�

public:
	Slaim(string name, int health, int defense, int attack, int physicalRegist)
		:_name(name), _health(health), _defense(defense), _attack(attack), _physicalRegist(physicalRegist)
	{}

	void SetHealth(int value) {
		_health = value;
	}

	int GetHealth() {
		return _health;
	}

	int GetDefense() {
		return _defense;
	}

	string GetName() {
		return _name;
	}

	int GetPhysicalRegist() { //�������� ���׷� Get �Լ�
		return _physicalRegist;
	}

	void Attack(Ogre& enemy);
	

	void Attack(Dragon& enemy);
	

	void Attack(Slaim& enemy);
	
};

