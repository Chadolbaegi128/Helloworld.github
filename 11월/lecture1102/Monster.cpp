#include "Monster.h"
#include <iostream>

using namespace std;

//데미지 계산 함수->Monster 클래스에서 구현부를 없애고 이것을 자식클래스에게 책임을 넘김
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

//공격
void Monster::Attack(Monster& enemy) {

	/*int calHealth = enemy.GetHealth() - (_attack - enemy.GetDefense());

	enemy.SetHealth(calHealth);*/
	//데미지 처리하는 책임을 맞은 몬스터한테 넘긴다.

	enemy.GetDamage(_attack);

	cout << _name << "이 " << enemy.GetName() << "을 " << _attack
		<< "의 공격력으로 공격해서 " << enemy.GetName() << "의 생명력을 "
		<< enemy.GetHealth() << "으로 만들었다" << endl;
}