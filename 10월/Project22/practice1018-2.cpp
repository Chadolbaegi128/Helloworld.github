#include <iostream>

using namespace std;

class Monster {
private:
	int _health;
	int _attack;

public:
	Monster() :_health(0), _attack(0) {
		cout << "�⺻ ������" << "\n";
	}

	Monster(int health, int attack) : _health(health), _attack(attack) {
		cout << "���ڸ� �޴� ������" << "\n";
	}

	~Monster() {
		cout << "�Ҹ���" << "\n";
	}

	void info() {
		cout << "Health: " << _health << "\n";
		cout << "Attack: " << _attack << "\n";
	}
};

int main() {
	Monster* p = new Monster(10, 10); //������ü
									//Ŭ�����̸�*�����ͺ���=new Ŭ���� �̸�
									//(������ �Ű����� ����Ʈ)
	p -> info();// �ּҰ����� ��ü�� ����� �����Ҷ�
				//ȭ��ǥ ������ ���.

	delete p;

	return 0;
}