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

	int GetHealth() const {//const �Լ�: ��������� ���� �������� �ʴ� �Լ�
		//_health=10; const�Լ� �ȿ��� ��������� ���� �����ϸ� ������ ����.
		//const int GetAttack(){return _attack;}=>������ ������ ���ڷ� ���� ��
		//�������� ���� ���� ���̰� �� �ܿ��� �� ������ ����
		return _health;
	}

	int GetAttack() const{
		return _attack;
	}

};

//const Ÿ������ ��ü�� ���ڷ� �����ϸ�
//���ڷ� ���޹��� �Լ��ȿ��� ��ü�� ���� ������ �� �����ϴ�.
//�Լ��ȿ��� ȣ�� �� ���ִ� ��ü�� ����Լ��� const�Լ���
//ȣ���� �����մϴ�.
void func(const Dragon& ref) {
	cout << "Health = " << ref.GetHealth() << "\n";

	cout << "Attack = " << ref.GetAttack() << "\n";//const ����Լ� �ƴ� ���� ȣ���ؼ� ������ �߻���
}

int main() {

	Dragon dragon(10, 20);

	func(dragon);

	return 0;
}