#include <iostream>
#include <string>

#include "pig.h"
#include "cow.h"
#include "chicken.h"

using namespace std;

int main() {
	Pig pig("20154232", 500.4f, 5, "¾ÏÄÆ");
	cout << "µ¿¹°³óÀå-µÅÁö" << "\n";
	pig.info();

	cout << "\n";
	Cow cow("20183123", 1000.5f, 3, "¼öÄÆ");
	cout << "µ¿¹°³óÀå-¼Ò" << "\n";
	cow.info();

	cout << "\n";
	Chicken chicken("20204134", 2.5f, 1, "¾ÏÄÆ");
	cout << "µ¿¹°³óÀå-´ß" << "\n";
	chicken.info();

	return 0;
}