#include <iostream>
#include <string>
#include "Monster.h"

using namespace std;

int main() {

	Monster mons(10, 20, 30);
	

	mons.SetHealth(200);
	mons.SetAttack(150);
	mons.Setdefence(300);
	mons.info();

	
	/*int temp = 20;
	if (temp < 0) {
		mons._health = 0;
	}
	else if (temp > 100) {
		mons._health = 100;
	}
	else { mons.SetHealth = temp; }
	*/
	//=>Monster.cpp에 있는 'Attack'함수가 여기에 매크로함수로 입력된다.
	//매크로 함수: 함수 형태이지만 함수 기능은 없다.

	//Monster 클래스에 멤버변수에 대한 Set/Get함수를 만드시고 값을
	//추가해서 출력해보세요...

	return 0;
}