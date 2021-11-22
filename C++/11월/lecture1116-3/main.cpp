#include <iostream>
#include <string>

using namespace std;

class Dragon {
private:
	string _name;
	int _health;
	int _attack;
	int _defense;

public:
	Dragon(string name, int health, int attack, int defense)
		:_name(name),_health(health), _attack(attack), _defense(defense)
	{}

	void SetHealth(int health)
	{
		_health = health;
	}

	int GetHealth()
	{
		return _health;
	}

	void SetAttack(int value)
	{
		this->_attack = value;
	}

	void info()
	{
		cout << "�̸�: " << this->_name << "\n";
		cout << "ü��: " << this->_health << "\n";
		cout << "���ݷ�: " << this->_attack << "\n";
		cout << "����: " << this->_defense << "\n";
		cout << "�ش� this ������ �ּҰ�: " << this << "\n";
		cout << "\n";
	}
};

int main() {
	
	Dragon dragon("dragon", 100, 30, 10);

	dragon.info();//���� ������ ����� �����Ҷ��� '.'(period)�����ڷ� ����
	(&dragon)->info();//�ּҰ��� ������ ����� �����Ҷ��� '->'ȭ��ǥ �����ڷ� ����

	Dragon dragon2("dragon2", 200, 100, 30);
	dragon2.info();
	(&dragon2)->info();

	return 0;
}