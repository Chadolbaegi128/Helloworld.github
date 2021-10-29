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
		cout << " �ֹ��� �޽��ϴ�. " << "\n";
		_barista->MakeADrink(drink);
	}
};

class Guest {
public:
	void OrderDrink(Drink& drink, Cashier& ref) {
		drink.info();
		cout << " �ֹ��� �մϴ�. " << "\n";
		ref.OrderedDrink(drink);
	}
};