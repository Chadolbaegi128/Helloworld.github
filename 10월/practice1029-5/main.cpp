#include <iostream>

using namespace std;

// Ŀ�Ǚ�
// Ŀ�Ǚ� ���� ���α׷��� �Ƿڸ� �޾ҽ��ϴ�.
// Ŀ�Ǚ� ������ �帧�� �ľ�.
// ��Ȱ(role)�� å��(responsibility).
//Barista
//guest
//Cashier

class Drink {
public:
	int _type;

public:
	Drink(): _type(){}
	Drink(int type):_type(type){}

	void info() {
		cout << "����";
	}
		
};

class Coffee :public Drink {
public:
	Coffee() : Drink() {}
	void info() {
		cout << "Ŀ��";
	}
};

class Americano :public Drink {
public:
	Americano():Drink(1){}
	void info() {
		cout << "�Ƹ޸�ī��";
	}
};

class CaffeLatte : public Drink {
public:
	CaffeLatte(): Drink(2){}
	void info() {
		cout << "ī���";
	}
};

class Frappuccino :public Drink {
public:
	Frappuccino():Drink(3){}
	void info() {
		cout << "����Ǫġ��";
	}
};

class GrapefruitAid : public Drink {
public:
	GrapefruitAid():Drink(4){}
	void info() {
		cout << "�ڸ����̵�";
	}
};

class Barista {
public:
	void MakeADrink(Drink& drink) {
		switch (drink._type) {
		case 0:
			{
				Coffee& ref = (Coffee&)drink;//�ٿ�ĳ����->���� Ŭ������
				ref.info();							//DrinkŬ������ ������ ������ CoffeeŬ������ ������ ������ ����
			}								//�Ʒ� case���� �Ȱ��� ������
			break;

		case 1:
			{
				Americano& ref = (Americano&)drink;
				ref.info();
			}
			break;

		case 2:
			{
				CaffeLatte& ref = (CaffeLatte&)drink;
				ref.info();
			}
			break;

		case 3:
			{
				Frappuccino& ref = (Frappuccino&)drink;
				ref.info();
			}
			break;

		case 4:
			{
				GrapefruitAid& ref = (GrapefruitAid&)drink;
				ref.info();
			}
			break;
		}
		cout << "�� ����ϴ�. " << "\n";
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
		switch (drink._type) {
		case 0:
			cout << "Ŀ�Ǹ� �ֹ� �޽��ϴ�." << "\n";
			break;

		case 1:
			cout << "�Ƹ޸�ī�븦 �ֹ� �޽��ϴ�." << "\n";
			break;

		case 2:
			cout << "ī��󶼸� �ֹ� �޽��ϴ�." << "\n";
			break;

		case 3:
			cout << "����Ǫġ�븦 �ֹ� �޽��ϴ�." << "\n";
			break;

		case 4:
			cout << "�ڸ����̵带 �ֹ� �޽��ϴ�." << "\n";
			break;

		}
		_barista->MakeADrink(drink);
	}
};

class Guest {
public:
	void OrderDrink(Drink& drink, Cashier& ref) {
		switch (drink._type) {
		case 0:
			cout << "Ŀ�Ǹ� �ֹ� �մϴ�." << "\n";
			break;

		case 1:
			cout << "�Ƹ޸�ī�븦 �ֹ� �մϴ�." << "\n";
			break;

		case 2:
			cout << "ī��󶼸� �ֹ� �մϴ�." << "\n";
			break;

		case 3:
			cout << "����Ǫġ�븦 �ֹ� �մϴ�." << "\n";
			break;

		case 4:
			cout << "�ڸ����̵带 �ֹ� �մϴ�." << "\n";
			break;
		}

		ref.OrderedDrink(drink);
	}
};

int main() {
	Barista barista;
	Cashier cashier;
	Guest guest;

	Coffee coffee;
	Americano americano;
	CaffeLatte caffelatte;
	Frappuccino frappuccino;
	GrapefruitAid grapefruitaid;

	cashier.SetBarista(&barista);

	cout << "��Yeonjun_Jung's Coffeshop��" << "\n"<<"\n";
	cout << "-MENU-" << "\n"<<"\n";

	guest.OrderDrink(coffee, cashier);
	cout << "\n"<<"\n";

	guest.OrderDrink(americano, cashier);
	cout << "\n"<<"\n";

	guest.OrderDrink(caffelatte, cashier);
	cout << "\n"<<"\n";

	guest.OrderDrink(frappuccino, cashier);
	cout << "\n"<<"\n";

	guest.OrderDrink(grapefruitaid, cashier);
	cout << "\n"<<"\n";

	return 0;
}