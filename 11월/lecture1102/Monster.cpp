#include "Monster.h"
#include <iostream>

using namespace std;

//������ ��� �Լ�->Monster Ŭ�������� �����θ� ���ְ� �̰��� �ڽ�Ŭ�������� å���� �ѱ�
//void Monster::GetDamage(int attackPower) {
//	cout << "Monster GetDamage" << "\n";
//	int damage = attackPower - _defense;
//
//	if (damage < 0) {
//		damage = 0;
//	}
//
//	_health -= damage;
//}

//����
void Monster::Attack(Monster& enemy) {

	/*int calHealth = enemy.GetHealth() - (_attack - enemy.GetDefense());

	enemy.SetHealth(calHealth);*/
	//������ ó���ϴ� å���� ���� �������� �ѱ��.

	enemy.GetDamage(_attack);

	cout << _name << "�� " << enemy.GetName() << "�� " << _attack
		<< "�� ���ݷ����� �����ؼ� " << enemy.GetName() << "�� ������� "
		<< enemy.GetHealth() << "���� �������" << endl;
}