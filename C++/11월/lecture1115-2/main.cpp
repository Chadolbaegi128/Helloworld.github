#include <iostream>

using namespace std;

class Monster {
private://����������(������� ���� ������ �����ϴ� Ű����)
	int _health; //�����(�������) ��ü�� �Ӽ�(attribute, property)
	int _attack; //���ݷ�(�������)
	int _defense; //����(�������)

	

public:
	Monster() {//������(�⺻������)
		_health = 0;
		_attack = 0;
		_defense = 0;
	}

	//������(���ڸ� �޴� ������)
	Monster(int health, int attack, int defense)
		:_health(health), _attack(attack), _defense(defense)//������ �ʱ�ȭ ����Ʈ
	{
		
	}

	~Monster() {
		//�Ҹ���
	}

	void Attack() {//����Լ�, ��ü�� �ൿ(action, behaviour)
		cout << "����" << "\n";
	}

	void Run() {//����Լ�
		cout << "�ڴ�" << "\n";
	}

	void info() {//����Լ�
		cout << "health: " << _health << "\n";
		cout << "attack: " << _attack << "\n";
		cout << "defense: " << _defense << "\n";

	}
};

int main() {
	Monster m(10, 20, 30);//���ڸ� �޴� ������ �۵�->�����ڿ� �μ� ����

	m.info();

	return 0;
}