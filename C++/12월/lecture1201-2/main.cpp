#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
#include "Slaim.h"
#include "Dragon.h"
#include "Ork.h"

using namespace std;

int main() {
	//Monster a("monster", 1, 1, 1, 1); 추상클래스의 객체를 만들 수 없음.

	Slaim slaimA("slaimA", 100, 10, 30, 5);
	Slaim slaimB("slaimB", 100, 8, 23, 10);
	Dragon dragonA("dragonA", 200, 15, 30, 40);

	dragonA.Attack(slaimB);

	char nameBuffer[100];
	Monster* monsterArray[9];

	for (int i = 0; i < 9; i++) {
		int num = i % 3;

		switch (num) {
		case 0:
			sprintf(nameBuffer, "Dragon_%d", i);
			monsterArray[i] = new Dragon(nameBuffer, 100, 30, 30, 15);
			break;

		case 1:
			sprintf(nameBuffer, "Slaim_%d", i);
			monsterArray[i] = new Slaim(nameBuffer, 30, 10, 30, 15);

			break;

		case 2:
			sprintf(nameBuffer, "Ork_%d", i);
			monsterArray[i] = new Ork(nameBuffer, 30, 10, 30);
			break;
		}
	}

	for (int i = 0; i < 9; i++) {
		monsterArray[i]->Attack(slaimA);
	}


	for (int i = 0; i < 9; i++) {
		delete monsterArray[i];
	}

	return 0;

}