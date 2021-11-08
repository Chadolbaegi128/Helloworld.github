#include "Slaim.h"
#include <iostream>

using namespace std;

void Slaim::GetDamage(int attackPower) {
	cout << "Slaim GetDamage" << "\n";

	int damage = attackPower - (_defense + _physicalRegist);

	if (damage < 0) {
		damage = 0;
	}

	_health -= damage;
}
