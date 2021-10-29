#include <iostream>

using namespace std;

// 커피숖
// 커피숖 관리 프로그램을 의뢰를 받았습니다.
// 커피숖 업무의 흐름을 파악.
// 역할(role)과 책임(responsibility).
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
		cout << "음료";
	}
	
};

class Coffee : public Drink {
public:
	Coffee() :Drink(0) {}
	void info() {
		cout << "커피";
	}
};

class Americano : public Drink {
public:
	Americano(): Drink(1){}
	void info() {
		cout << "아메리카노";
	}

};

class Latte : public Drink {
public:
	Latte():Drink(2){}
	void info() {
		cout << "라떼";
	}
};

class Frappuccino : public Drink {
public:
	Frappuccino():Drink(3){}
	void info() {
		cout << "프라푸치노";
	}
};

class Aid :public Drink {
public:
	Aid():Drink(4){}
	void info() {
		cout << "에이드";
	}
};

class Barista {
public:
	void MakeADrink(Drink& drink) {
		switch (drink._type) {
		case 0:
			{
				//형변환 연산자->'drink'의 데이터 타입이 'Drink&'였으므로
				//이 값을 Coffee& ref로 바꾸기 위해서 'drink' 앞에 괄호를 치고
				//참조형 데이터 타입 'Coffee&'을 작성함
			Coffee& ref = (Coffee&)drink; //다운캐스팅
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
		cout << "를 만듭니다. " << "\n";
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
			cout << "커피를 주문 받습니다. " << "\n";
			break;
		case 1:
			cout << "아메리카노를 주문 받습니다. " << "\n";
			break;
		case 2:
			cout << "라떼를 주문 받습니다. " << "\n";
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
			cout << "커피를 주문 합니다. " << "\n";
			break;
		case 1:
			cout << "아메리카노를 주문 합니다. " << "\n";
			break;
		case 2:
			cout << "라떼를 주문 합니다. " << "\n";
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