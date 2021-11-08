#include <iostream>
#include "staff.h"

using namespace std;

// 커피숖
// 커피숖 관리 프로그램을 의뢰를 받았습니다.
// 커피숖 업무의 흐름을 파악.
// 역할(role)과 책임(responsibility).
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