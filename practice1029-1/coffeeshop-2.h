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
		cout << "���Ḧ ����ϴ�. " << "\n";
	}

	void MakeADrink(Coffee drink) {
		cout << "Ŀ�Ǹ� ����ϴ�. " << "\n";
	}

	void MakeADrink(CaffeLatte drink) {
		cout << "ī��󶼸� ����ϴ�. " << "\n";
	}

	void MakeADrink(LemonAid drink) {
		cout << "�����̵带 ����ϴ�. " << "\n";
	}

	void MakeADrink(Americano drink) {
		cout << "�Ƹ޸�ī�븦 ����ϴ�. " << "\n";
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
		cout << "���Ḧ �ֹ� �޽��ϴ�. " << "\n";
		cout << "\n";

		_barista->MakeADrink();
	}

	void OrderedDrink(Coffee drink) {
		cout << "Ŀ�Ǹ� �ֹ� �޽��ϴ�. " << "\n";
		cout << "\n";

		_barista->MakeADrink(drink);
	}

	void OrderedDrink(CaffeLatte drink) {
		cout << "ī��󶼸� �ֹ� �޽��ϴ�. " << "\n";
		cout << "\n";

		_barista->MakeADrink(drink);
	}

	void OrderedDrink(LemonAid drink) {
		cout << "�����̵带 �ֹ� �޽��ϴ�. " << "\n";
		cout << "\n";

		_barista->MakeADrink(drink);
	}

	void OrderedDrink(Americano drink) {
		cout << "�Ƹ޸�ī�븦 �ֹ� �޽��ϴ�." << "\n";
		cout << "\n";

		_barista->MakeADrink(drink);
	}
};

class Guest {
public:
	void OrderDrink(Cashier& ref) {
		cout << "-����-" << "\n";
		cout << "\n";
		cout << "���Ḧ �ֹ� �մϴ�. " << "\n";
		cout << "\n";
		ref.OrderedDrink();
	}

	void OrderDrink(Coffee drink, Cashier& ref) {
		cout << "-Ŀ��-" << "\n";
		cout << "\n";
		cout << "Ŀ�Ǹ� �ֹ� �մϴ�." << "\n";
		cout << "\n";
		ref.OrderedDrink(drink);
	}

	void OrderDrink(CaffeLatte drink, Cashier& ref) {
		cout << "-ī���-" << "\n";
		cout << "\n";
		cout << "ī��󶼸� �ֹ� �մϴ�." << "\n";
		cout << "\n";
		ref.OrderedDrink(drink);
	}

	void OrderDrink(LemonAid drink, Cashier& ref) {
		cout << "-�����̵�-" << "\n";
		cout << "\n";
		cout << "�����̵带 �ֹ� �մϴ�." << "\n";
		cout << "\n";
		ref.OrderedDrink(drink);
	};

	void OrderDrink(Americano drink, Cashier& ref) {
		cout << "-�Ƹ޸�ī��-" << "\n";
		cout << "\n";
		cout << "�Ƹ޸�ī�븦 �ֹ� �մϴ�." << "\n";
		cout << "\n";
		ref.OrderedDrink(drink);
	}
};