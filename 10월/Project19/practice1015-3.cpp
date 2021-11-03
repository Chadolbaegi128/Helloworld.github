#include <iostream>
#include "practice1015_monster.h"

using namespace std;

int main() {
	Succubus a;

	a.SetHealth(150);
	a.SetAttack(200);
	a.SetMana(830);
	a.SetDefence(1500);
	a.info();
	cout << "\n";
	cout << "※해당 개체는 다가오는 플레이어에게 매혹을 걸 수 있으니 주의를 요망";
}