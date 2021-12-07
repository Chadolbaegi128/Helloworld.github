#include "Monster.h"
#include <iostream>

using namespace std;

void Monster::Attack(Monster& ref) {
	cout << "Monster Attack" << endl;
	cout << "\n";
	ref.GetDamage(_attack);

	cout << ref._name << "을 " << _name << "이 공격해서 생명력을 " << ref.GetHealth() << "로 줄임" << endl;
	cout << "\n";
}
