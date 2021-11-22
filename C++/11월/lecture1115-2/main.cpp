#include <iostream>

using namespace std;

class Monster {
private://접근제어자(멤버변수 접근 권한을 제어하는 키워드)
	int _health; //생명력(멤버변수) 객체의 속성(attribute, property)
	int _attack; //공격력(멤버변수)
	int _defense; //방어력(멤버변수)

	

public:
	Monster() {//생성자(기본생성자)
		_health = 0;
		_attack = 0;
		_defense = 0;
	}

	//생성자(인자를 받는 생성자)
	Monster(int health, int attack, int defense)
		:_health(health), _attack(attack), _defense(defense)//생성자 초기화 리스트
	{
		
	}

	~Monster() {
		//소멸자
	}

	void Attack() {//멤버함수, 객체의 행동(action, behaviour)
		cout << "공격" << "\n";
	}

	void Run() {//멤버함수
		cout << "뛴다" << "\n";
	}

	void info() {//멤버함수
		cout << "health: " << _health << "\n";
		cout << "attack: " << _attack << "\n";
		cout << "defense: " << _defense << "\n";

	}
};

int main() {
	Monster m(10, 20, 30);//인자를 받는 생성자 작동->생성자에 인수 전달

	m.info();

	return 0;
}