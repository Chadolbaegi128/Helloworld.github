#include <iostream>

using namespace std;

class Dragon {
private:
	int _health;
	int _attack;

public:
	Dragon(int health, int attack)
		:_health(health), _attack(attack)
	{}

	int GetHealth() const {//const 함수: 멤버변수의 값을 변경하지 않는 함수
		//_health=10; const함수 안에서 멤버변수의 값을 변경하면 에러가 난다.
		//const int GetAttack(){return _attack;}=>참조형 변수를 인자로 받을 때
		//변형하지 않을 때만 쓰이고 그 외에는 잘 쓰이지 않음
		return _health;
	}

	int GetAttack() const{
		return _attack;
	}

};

//const 타입으로 객체를 인자로 전달하면
//인자로 전달받은 함수안에서 객체의 값을 변경할 수 없습니다.
//함수안에서 호출 할 수있는 객체의 멤버함수는 const함수만
//호출이 가능합니다.
void func(const Dragon& ref) {
	cout << "Health = " << ref.GetHealth() << "\n";

	cout << "Attack = " << ref.GetAttack() << "\n";//const 멤버함수 아닌 것을 호출해서 에러가 발생함
}

int main() {

	Dragon dragon(10, 20);

	func(dragon);

	return 0;
}