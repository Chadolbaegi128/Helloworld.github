#include <iostream>
#include "staff.h"

using namespace std;

// Ŀ�Ǚ�
// Ŀ�Ǚ� ���� ���α׷��� �Ƿڸ� �޾ҽ��ϴ�.
// Ŀ�Ǚ� ������ �帧�� �ľ�.
// ����(role)�� å��(responsibility).
//Barista
//guest
//Cashier


int main() {
	Barista barista;
	Cashier cashier;
	Guest guest;

	Coffee coffee;
	Americano americano;
	Latte latte;
	Frappuccino frappuccino;

	cashier.SetBarista(&barista);

	guest.OrderDrink(coffee, cashier);

	cout << "\n";
	guest.OrderDrink(americano, cashier);

	cout << "\n";
	guest.OrderDrink(latte, cashier);

	cout << "\n";
	guest.OrderDrink(frappuccino, cashier);

	return 0;
}