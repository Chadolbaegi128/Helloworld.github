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
		cout << "이름: " << this->_name << "\n";
		cout << "체력: " << this->_health << "\n";
		cout << "공격력: " << this->_attack << "\n";
		cout << "방어력: " << this->_defense << "\n";
		cout << "해당 this 포인터 주소값: " << this << "\n";
		cout << "\n";
	}
};

int main() {
	
	Dragon dragon("dragon", 100, 30, 10);

	dragon.info();//값을 가지고 멤버에 접근할때는 '.'(period)연산자로 접근
	(&dragon)->info();//주소값을 가지고 멤버에 접근할때는 '->'화살표 연산자로 접근

	Dragon dragon2("dragon2", 200, 100, 30);
	dragon2.info();
	(&dragon2)->info();

	return 0;
}