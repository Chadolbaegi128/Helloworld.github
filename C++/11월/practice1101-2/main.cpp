#include <iostream>
#include <string>
#include "Ogre.h"
#include "Dragon.h"
#include "Slaim.h"

using namespace std;

int main() {
	Ogre ogreA("Ogre A", 100, 20, 40);
	Ogre ogreB("Ogre B", 120, 30, 60);

	Slaim slaimA("Slaim A", 80, 20, 30, 30);

	Dragon dragonA("Dragon A", 250, 50, 80);
	

	ogreA.Attack(ogreB);

	dragonA.Attack(ogreA);

	dragonA.Attack(slaimA);

	return 0;
}