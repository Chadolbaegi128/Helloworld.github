#pragma once
#include <iostream>
#include "menu.h"

using namespace std;

class Barista {
public:
	void MakeADrink(Drink& drink) {
		drink.MakeADrink();
	}
};

class Cashier {
private:
	Barista* _barista;

public:
	void SetBarista(Barista* pbarista) {
		_barista = pbarista;
	}

	void OrderedDrink(Drink& drink) {
		drink.info();
		cout << " 주문을 받습니다. " << "\n";
		_barista->MakeADrink(drink);
	}
};

class Guest {
public:
	void OrderDrink(Drink& drink, Cashier& ref) {
		drink.info();
		cout << " 주문을 합니다. " << "\n";
		ref.OrderedDrink(drink);
	}
};