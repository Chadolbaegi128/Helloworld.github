#include <iostream>
#include "practice1017-1_monster1.h"

using namespace std;

void Monster::info() {
	cout << "서큐버스" << "\n";
	cout << "\n";
	cout << "데몬계열 몬스터 체력: " << _health << "\n";
	cout << "데몬계열 몬스터 공격력: " << _attack << "\n";
	cout << "데몬계열 몬스터 방어력: " << _defence << "\n";
}