#pragma once //��������� �ߺ��� �����ϱ� ���� �ڵ�//���־� ��Ʃ��� ���α׷������� �����
#include <iostream>

using namespace std;

class Monster {
private:
	int _health; //�������
	int _attack;
	int _defence;

public:
	Monster(int health, int attack, int defence)
		: _health(health), _attack(attack), _defence(defence) {
	};

	inline void SetHealth(int value);//�ζ��� �Լ� �����// Ŭ������ �ζ��� �Լ� �����θ� �ۼ��� ��� ���� �ۼ��� �ʿ�� ����.
	inline void SetAttack(int value);
	inline void Setdefence(int value);


	int GetHealth(int value) {
		return _health;
	}
	int GetAttack(int value) {
		return _attack;
	}
	int Getdefence(int value) {
		return _defence;
	};

	 
	void Attack();
	void Walk(); //����Լ� // �Լ��� ����(Prototype)
					//'Attack'�Լ��� ���� ������ ���� �ʾҴ�. ���� �Ǿ�����.

	void Speak();

	void info();
};

inline void Monster::Setdefence(int value) {
	if (value < 0) {
		_defence = 0;
	}
	else if (value > 300) {
		_defence = 300;
	}
	else {
		_defence = value;
	}
}

inline void Monster::SetAttack(int value) {
	if (value < 0) {
		_attack = 0;
	}
	else if (value > 150) {
		_attack = 100;
	}
	else {
		_attack = value;
	}
}

inline void Monster::SetHealth(int value) {//�ζ����Լ� ������//�ζ����Լ� ����θ� Ŭ������ ���� ��� �ܺο� ������ �ۼ��ؾ� �Ѵ�.
	if (value < 0) {
		_health = 0;
	}
	else if (value > 100) {
		_health = 100;
	}
	else {
		_health = value;
	}
}