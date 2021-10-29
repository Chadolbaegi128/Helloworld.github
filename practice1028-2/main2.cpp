#include <iostream>
#include "coffeeshop.h"

using namespace std;

//커피샵
//커피샵 관리 프로그램을 의뢰 받음
//커피샵 업무의 흐름을 파악하는 것이 중요함
//역할(role)과 책임(reponsibility)
//Barista
//Guest
//Cashier


int main() {
	Barista barista;
	Cashier cashier;
	Guest guest;


	Coffee coffee;
	CaffeLatte caffelatte;
	LemonAid lemonaid;
	Americano americano;

	cashier.SetBarista(&barista);

	guest.OrderDrink(cashier);
	cout << "\n";
	cout << "\n";
	guest.OrderDrink(coffee, cashier);
	cout << "\n";
	cout << "\n";
	guest.OrderDrink(caffelatte, cashier);
	cout << "\n";
	cout << "\n";
	guest.OrderDrink(lemonaid, cashier);
	cout << "\n";
	cout << "\n";
	guest.OrderDrink(americano, cashier);
	return 0;
}