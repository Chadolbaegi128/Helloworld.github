#pragma once
#include <iostream>

using namespace std;

class Drink {
public:
	Drink() {}

	virtual void info() {//�����Լ�
		cout << "����" << "\n";
	}

	virtual void MakeADrink() {//�����Լ�
		cout << "���� ����ϴ�. " << "\n";
	}
};

class Coffee : public Drink {
public:
	Coffee() {}
	void info() override {
		cout << "Ŀ��";
	}

	void MakeADrink()override {
		cout << "Ŀ�Ǹ� ����ϴ�. " << "\n";
	}
};

class Americano : public Drink {
public:
	Americano() {}
	void info()override {
		cout << "�Ƹ޸�ī��";
	}

	void MakeADrink() override {
		cout << "�Ƹ޸�ī�븦 ����ϴ�. " << "\n";
	}
};

class Latte :public Drink {
public:
	Latte() {}
	void info()override {
		cout << "��";
	}

	void MakeADrink()override {
		cout << "�󶼸� ����ϴ�. " << "\n";
	}
};

class Frappuccino : public Drink {
public:
	Frappuccino() {}
	void info()override {
		cout << "����Ǫġ��";
	}

	void MakeADrink() override {
		cout << "����Ǫġ�븦 ����ϴ�. " << "\n";
	}
};

class Aid : public Drink {
public:
	Aid() {}
	void info() override {
		cout << "���̵�" << "\n";
	}

	void MakeADrink()override {
		cout << "���̵带 ����ϴ�. " << "\n";
	}
};