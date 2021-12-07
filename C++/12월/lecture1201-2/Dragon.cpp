#include "Dragon.h"
#include "Slaim.h"
#include "Ork.h"

void Dragon::Attack(Monster& ref) {
	cout << "Dragon Attack" << endl;
	cout << "\n";
	ref.GetDamage(_attack + _fireAttack);

	cout << ref.GetName() << "을 " << _name << "이 공격해서 생명력을 " << ref.GetHealth() << "로 줄임" << endl;
	cout << "\n";
}


void Dragon::FireAttack(Dragon& ref) {
	cout << "fireAttack" << endl;
	cout << "\n";
	int health = ref.GetHealth();	// 맞는 몬스터의 생명력을 가져온다.
	health -= (_fireAttack - ref.GetDefense());	// 때린 몬스터의 공격력으로 맞은 몬스터의 생명력을 줄인다.

	ref.SetHealth(health);

	cout << ref.GetName() << "을 " << _name << "이 불 공격해서 생명력을 " << health << "로 줄임" << endl;
	cout << "\n";

}

void Dragon::FireAttack(Slaim& ref) {
	cout << "fireAttack" << endl;
	cout << "\n";
	int health = ref.GetHealth();	// 맞는 몬스터의 생명력을 가져온다.
	health -= (_fireAttack - ref.GetDefense());	// 때린 몬스터의 공격력으로 맞은 몬스터의 생명력을 줄인다.

	ref.SetHealth(health);

	cout << ref.GetName() << "을 " << GetName() << "이 불 공격해서 생명력을 " << health << "로 줄임" << endl;
	cout << "\n";

}

void Dragon::FireAttack(Ork& ref) {
	cout << "fireAttack" << endl;
	cout << "\n";
	int health = ref.GetHealth();	// 맞는 몬스터의 생명력을 가져온다.
	health -= (_fireAttack - ref.GetDefense());	// 때린 몬스터의 공격력으로 맞은 몬스터의 생명력을 줄인다.

	ref.SetHealth(health);

	cout << ref.GetName() << "을 " << GetName() << "이 불 공격해서 생명력을 " << health << "로 줄임" << endl;
	cout << "\n";

}