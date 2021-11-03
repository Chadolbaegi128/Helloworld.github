#pragma once
#include <iostream>

using namespace std;

class Drink {
public:
	Drink() {}

	virtual void info() {//가상함수
		cout << "음료" << "\n";
	}

	virtual void MakeADrink() {//가상함수
		cout << "음료 만듭니다. " << "\n";
	}
};

class Coffee : public Drink {
public:
	Coffee() {}
	void info() override {
		cout << "커피";
	}

	void MakeADrink()override {
		cout << "커피를 만듭니다. " << "\n";
	}
};

class Americano : public Drink {
public:
	Americano() {}
	void info()override {
		cout << "아메리카노";
	}

	void MakeADrink() override {
		cout << "아메리카노를 만듭니다. " << "\n";
	}
};

class Latte :public Drink {
public:
	Latte() {}
	void info()override {
		cout << "라떼";
	}

	void MakeADrink()override {
		cout << "라떼를 만듭니다. " << "\n";
	}
};

class Frappuccino : public Drink {
public:
	Frappuccino() {}
	void info()override {
		cout << "프라푸치노";
	}

	void MakeADrink() override {
		cout << "프라푸치노를 만듭니다. " << "\n";
	}
};

class Aid : public Drink {
public:
	Aid() {}
	void info() override {
		cout << "에이드" << "\n";
	}

	void MakeADrink()override {
		cout << "에이드를 만듭니다. " << "\n";
	}
};