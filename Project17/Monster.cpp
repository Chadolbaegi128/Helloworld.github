#include <iostream>
#include <string>
#include "Monster.h"

using namespace std;

void Monster::Attack() {//멤버함수
						//'::'(범위지정연산자)를 집어넣어 'Monster'클래스에 속해있다는 것을 보여준다.
	cout << "공격" << "\n";
}

void Monster::Walk() {
	cout << "걷는다." << "\n";
}

void Monster::Speak() {
	cout << "말한다." << "\n";
}

void Monster::info() {
	cout << "몬스터의 체력: " << _health << "\n";
	cout << "몬스터의 공격력: " << _attack << "\n";
	cout << "몬스터의 방어력: " << _defence << "\n";
}