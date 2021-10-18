#include <iostream>

using namespace std;

class Monster {
private:
	int _health;
	int _attack;

public:
	Monster() :_health(0), _attack(0) {
		cout << "기본 생성자" << "\n";
	}

	Monster(int health, int attack) : _health(health), _attack(attack) {
		cout << "인자를 받는 생성자" << "\n";
	}

	~Monster() {
		cout << "소멸자" << "\n";
	}

	void info() {
		cout << "Health: " << _health << "\n";
		cout << "Attack: " << _attack << "\n";
	}
};

int main() {
	Monster* p = new Monster(10, 10); //동적객체
									//클래스이름*포인터변수=new 클래스 이름
									//(생성자 매개변수 리스트)
	p -> info();// 주소값으로 객체의 멤버에 접근할때
				//화살표 연산자 사용.

	delete p;

	return 0;
}