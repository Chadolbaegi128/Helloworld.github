#include <iostream>

using namespace std;

// Ŀ�Ǚ�
// Ŀ�Ǚ� ���� ���α׷��� �Ƿڸ� �޾ҽ��ϴ�.
// Ŀ�Ǚ� ������ �帧�� �ľ�.
// ����(role)�� å��(responsibility).
//Barista
//guest
//Cashier

class Drink {
public:
	int _type;
public:
	Drink(): _type(0){}
	Drink(int type):_type(type){}

	void info() {
		cout << "����";
	}
	
};

class Coffee : public Drink {
public:
	Coffee() :Drink(0) {}
	void info() {
		cout << "Ŀ��";
	}
};

class Americano : public Drink {
public:
	Americano(): Drink(1){}
	void info() {
		cout << "�Ƹ޸�ī��";
	}

};

class Latte : public Drink {
public:
	Latte():Drink(2){}
	void info() {
		cout << "��";
	}
};

class Frappuccino : public Drink {
public:
	Frappuccino():Drink(3){}
	void info() {
		cout << "����Ǫġ��";
	}
};

class Aid :public Drink {
public:
	Aid():Drink(4){}
	void info() {
		cout << "���̵�";
	}
};

class Barista {
public:
	void MakeADrink(Drink& drink) {
		switch (drink._type) {
		case 0:
			{
				//����ȯ ������->'drink'�� ������ Ÿ���� 'Drink&'�����Ƿ�
				//�� ���� Coffee& ref�� �ٲٱ� ���ؼ� 'drink' �տ� ��ȣ�� ġ��
				//������ ������ Ÿ�� 'Coffee&'�� �ۼ���
			Coffee& ref = (Coffee&)drink; //�ٿ�ĳ����
			ref.info();
			}
			break;

		case 1:
			{
			Americano& ref = (Americano&)drink;
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

	void OrderedDrink(Drink& drink)
	{
		switch (drink._type) {
		case 0:
			cout << "Ŀ�Ǹ� �ֹ� �޽��ϴ�. " << "\n";
			break;
		case 1:
			cout << "�Ƹ޸�ī�븦 �ֹ� �޽��ϴ�. " << "\n";
			break;
		case 2:
			cout << "�󶼸� �ֹ� �޽��ϴ�. " << "\n";
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
			cout << "Ŀ�Ǹ� �ֹ� �մϴ�. " << "\n";
			break;
		case 1:
			cout << "�Ƹ޸�ī�븦 �ֹ� �մϴ�. " << "\n";
			break;
		case 2:
			cout << "�󶼸� �ֹ� �մϴ�. " << "\n";
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
	Latte latte;

	cashier.SetBarista(&barista);

	guest.OrderDrink(coffee, cashier);

	cout << "\n";
	guest.OrderDrink(americano, cashier);

	return 0;
}