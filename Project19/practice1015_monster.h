#ifndef MONSTER_H//��������� �ߺ� ������ �ڵ�//���־� ��Ʃ��� ���� �ٸ� IDE���� ���밡��
#define MONSTER_H
#include <iostream>

using namespace std;

class Succubus {
private:
	int _health;//�������
	int _attack;//
	int _mana;//
	int _defence;//

public:
	Succubus() : _health(0), _attack(0), _mana(0), _defence(0) {

	}

	inline void SetHealth(int value) {
		if (value < 5) {
			_health = 0;
		}
		else if (value > 190) {
			_health = 200;
		}
		else {
			_health = value;
		}
	}

	int GetHealth(int value) {
		return _health;
	}

	inline void SetAttack(int value) {
		if (value < 0) {
			_attack = 0;
		}
		else if (value > 500) {
			_attack = 500;
		}
		else {
			_attack = value;
		}
	}

	int GetAttack(int value) {
		return _attack;
	}

	inline void SetMana(int value) {
		_mana = value;
	}

	int GetMana(int value) {
		return _mana;
	}

	inline void SetDefence(int value) {
		if (value < 0) {
			_defence = 0;
		}
		else if (value > 1000) {
			_defence = 1000;
		}
		else {
			_defence = value;
		}
	}

	int GetDefence(int value) {
		return _defence;
	}

	void info();

};


#endif
