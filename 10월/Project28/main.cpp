#include <iostream>
#include <string>

#include "pig.h"
#include "cow.h"
#include "chicken.h"

using namespace std;

int main() {
	Pig pig("20154232", 500.4f, 5, "����");
	cout << "��������-����" << "\n";
	pig.info();

	cout << "\n";
	Cow cow("20183123", 1000.5f, 3, "����");
	cout << "��������-��" << "\n";
	cow.info();

	cout << "\n";
	Chicken chicken("20204134", 2.5f, 1, "����");
	cout << "��������-��" << "\n";
	chicken.info();

	return 0;
}