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
		cout << "�⺻ ������" << "\n";
	}

	Monster(int health, int attack, int defense)
		:_health(health), _attack(attack), _defense(defense)
	{
		cout << "���ڸ� �޴� ������" << "\n";
	}

	~Monster() {
		cout << "�Ҹ���" << "\n";
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
	
	Monster** pa = new Monster * [10];//���� ������ �ּҰ� �迭 10����
	//����Ǵ� ���� ����, ������ �迭(�����迭)

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