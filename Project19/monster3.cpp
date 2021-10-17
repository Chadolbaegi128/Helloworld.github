#include <iostream>
#include "practice1015_monster.h"

using namespace std;

void Succubus::info() {
	cout << "몬스터: 서큐버스" << "\n";
	cout << "\n";
	cout << "체력: " << _health << "\n";
	cout << "공격력: " << _attack << "\n";
	cout << "마나수치: " << _mana << "\n";
	cout << "방어력: " << _defence << "\n";

}