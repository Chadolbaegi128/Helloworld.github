#include <iostream>
#include "coffeeshop.h"

using namespace std;

//Ŀ�Ǽ�
//Ŀ�Ǽ� ���� ���α׷��� �Ƿ� ����
//Ŀ�Ǽ� ������ �帧�� �ľ��ϴ� ���� �߿���
//����(role)�� å��(reponsibility)
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