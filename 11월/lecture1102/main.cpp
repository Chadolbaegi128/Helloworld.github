#include <iostream>
#include <string>

#include "Dragon.h"
#include "Ogre.h"
#include "Slaim.h"

using namespace std;
//����

int main() {
	/*Monster a("Monsterb", 222, 330, 1);->�߻� Ŭ������ �ڽ��� ��ü�� ���� �� ����.*/

	Ogre ogreA("Ogre A", 100, 20, 40);
	Ogre ogreB("Ogre B", 120, 30, 60);

	Dragon dragonA("Dragon A", 250, 50, 80);

	Slaim slaimA("Slaim A", 80, 20, 30, 30);


	dragonA.Attack(slaimA);

	return 0;
}