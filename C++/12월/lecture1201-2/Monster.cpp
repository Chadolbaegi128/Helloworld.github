#include "Monster.h"
#include <iostream>

using namespace std;

void Monster::Attack(Monster& ref) {
	cout << "Monster Attack" << endl;
	cout << "\n";
	ref.GetDamage(_attack);

	cout << ref._name << "�� " << _name << "�� �����ؼ� ������� " << ref.GetHealth() << "�� ����" << endl;
	cout << "\n";
}
