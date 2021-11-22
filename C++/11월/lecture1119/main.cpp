#include <iostream>

using namespace std;

class Monster {
private:
	int _health;
	int _attack;
	int _defense;

public:
	Monster()
	{
		cout << "기본 생성자" << "\n";
	}

	Monster(int health, int attack, int defense)
		:_health(health), _attack(attack), _defense(defense)
	{
		cout << "인자를 받는 생성자" << "\n";
	}

	~Monster() {
		cout << "소멸자" << "\n";
	}

	void Init(int health, int attack, int defense)
	{
		_health = health;
		_attack = attack;
		_defense = defense;
	}

	void info() {
		cout << "health = " << _health << "\n";
		cout << "attack = " << _attack << "\n";
		cout << "defense = " << _defense << "\n";

		cout << "\n";
	}
};

int main() {
	
	Monster** pa = new Monster * [10];//몬스터 변수의 주소값 배열 10개를
	//저장되는 변수 생성, 포인터 배열(동적배열)

	for (int i = 0; i < 10; i++) {
		pa[i] = new Monster(i * 2, i * 3, i * 4);
	}

	for (int i = 0; i < 10; i++)
	{
		pa[i]->info();
	}

	for (int i = 0; i < 10; i++) {
		delete pa[i];
	}

	delete[] pa;

	return 0;
}