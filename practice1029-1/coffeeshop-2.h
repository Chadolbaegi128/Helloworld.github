#pragma once
#include <iostream>

using namespace std;


class Coffee {

};

class CaffeLatte {

};

class LemonAid {

};

class Americano {

};

class Barista {
public:

	void MakeADrink() {
		cout << "음료를 만듭니다. " << "\n";
	}

	void MakeADrink(Coffee drink) {
		cout << "커피를 만듭니다. " << "\n";
	}

	void MakeADrink(CaffeLatte drink) {
		cout << "카페라떼를 만듭니다. " << "\n";
	}

	void MakeADrink(LemonAid drink) {
		cout << "레몬에이드를 만듭니다. " << "\n";
	}

	void MakeADrink(Americano drink) {
		cout << "아메리카노를 만듭니다. " << "\n";
	}
};



class Cashier {
private:
	Barista* _barista;
public:
	void SetBarista(Barista* pbarista) {
		_barista = pbarista;
	}

	void OrderedDrink() {
		cout << "음료를 주문 받습니다. " << "\n";
		cout << "\n";

		_barista->MakeADrink();
	}

	void OrderedDrink(Coffee drink) {
		cout << "커피를 주문 받습니다. " << "\n";
		cout << "\n";

		_barista->MakeADrink(drink);
	}

	void OrderedDrink(CaffeLatte drink) {
		cout << "카페라떼를 주문 받습니다. " << "\n";
		cout << "\n";

		_barista->MakeADrink(drink);
	}

	void OrderedDrink(LemonAid drink) {
		cout << "레몬에이드를 주문 받습니다. " << "\n";
		cout << "\n";

		_barista->MakeADrink(drink);
	}

	void OrderedDrink(Americano drink) {
		cout << "아메리카노를 주문 받습니다." << "\n";
		cout << "\n";

		_barista->MakeADrink(drink);
	}
};

class Guest {
public:
	void OrderDrink(Cashier& ref) {
		cout << "-음료-" << "\n";
		cout << "\n";
		cout << "음료를 주문 합니다. " << "\n";
		cout << "\n";
		ref.OrderedDrink();
	}

	void OrderDrink(Coffee drink, Cashier& ref) {
		cout << "-커피-" << "\n";
		cout << "\n";
		cout << "커피를 주문 합니다." << "\n";
		cout << "\n";
		ref.OrderedDrink(drink);
	}

	void OrderDrink(CaffeLatte drink, Cashier& ref) {
		cout << "-카페라떼-" << "\n";
		cout << "\n";
		cout << "카페라떼를 주문 합니다." << "\n";
		cout << "\n";
		ref.OrderedDrink(drink);
	}

	void OrderDrink(LemonAid drink, Cashier& ref) {
		cout << "-레몬에이드-" << "\n";
		cout << "\n";
		cout << "레몬에이드를 주문 합니다." << "\n";
		cout << "\n";
		ref.OrderedDrink(drink);
	};

	void OrderDrink(Americano drink, Cashier& ref) {
		cout << "-아메리카노-" << "\n";
		cout << "\n";
		cout << "아메리카노를 주문 합니다." << "\n";
		cout << "\n";
		ref.OrderedDrink(drink);
	}
};