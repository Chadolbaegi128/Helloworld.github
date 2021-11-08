#include <iostream>

using namespace std;

// 커피숖
// 커피숖 관리 프로그램을 의뢰를 받았습니다.
// 커피숖 업무의 흐름을 파악.
// 역활(role)과 책임(responsibility).
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
		cout << "음료";
	}
		
};

class Coffee :public Drink {
public:
	Coffee() : Drink() {}
	void info() {
		cout << "커피";
	}
};

class Americano :public Drink {
public:
	Americano():Drink(1){}
	void info() {
		cout << "아메리카노";
	}
};

class CaffeLatte : public Drink {
public:
	CaffeLatte(): Drink(2){}
	void info() {
		cout << "카페라떼";
	}
};

class Frappuccino :public Drink {
public:
	Frappuccino():Drink(3){}
	void info() {
		cout << "프라푸치노";
	}
};

class GrapefruitAid : public Drink {
public:
	GrapefruitAid():Drink(4){}
	void info() {
		cout << "자몽에이드";
	}
};

class Barista {
public:
	void MakeADrink(Drink& drink) {
		switch (drink._type) {
		case 0:
			{
				Coffee& ref = (Coffee&)drink;//다운캐스팅->상위 클래스인
				ref.info();							//Drink클래스의 참조형 변수를 Coffee클래스의 참조형 변수로 변경
			}								//아래 case에도 똑같이 적용함
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

	void OrderedDrink(Drink& drink) {
		switch (drink._type) {
		case 0:
			cout << "커피를 주문 받습니다." << "\n";
			break;

		case 1:
			cout << "아메리카노를 주문 받습니다." << "\n";
			break;

		case 2:
			cout << "카페라떼를 주문 받습니다." << "\n";
			break;

		case 3:
			cout << "프라푸치노를 주문 받습니다." << "\n";
			break;

		case 4:
			cout << "자몽에이드를 주문 받습니다." << "\n";
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
			cout << "커피를 주문 합니다." << "\n";
			break;

		case 1:
			cout << "아메리카노를 주문 합니다." << "\n";
			break;

		case 2:
			cout << "카페라떼를 주문 합니다." << "\n";
			break;

		case 3:
			cout << "프라푸치노를 주문 합니다." << "\n";
			break;

		case 4:
			cout << "자몽에이드를 주문 합니다." << "\n";
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

	cout << "※Yeonjun_Jung's Coffeshop※" << "\n"<<"\n";
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