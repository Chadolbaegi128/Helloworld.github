#include "Dragon.h"
#include "Slaim.h"
#include "Ork.h"

void Dragon::Attack(Monster& ref) {
	cout << "Dragon Attack" << endl;
	cout << "\n";
	ref.GetDamage(_attack + _fireAttack);

	cout << ref.GetName() << "�� " << _name << "�� �����ؼ� ������� " << ref.GetHealth() << "�� ����" << endl;
	cout << "\n";
}


void Dragon::FireAttack(Dragon& ref) {
	cout << "fireAttack" << endl;
	cout << "\n";
	int health = ref.GetHealth();	// �´� ������ ������� �����´�.
	health -= (_fireAttack - ref.GetDefense());	// ���� ������ ���ݷ����� ���� ������ ������� ���δ�.

	ref.SetHealth(health);

	cout << ref.GetName() << "�� " << _name << "�� �� �����ؼ� ������� " << health << "�� ����" << endl;
	cout << "\n";

}

void Dragon::FireAttack(Slaim& ref) {
	cout << "fireAttack" << endl;
	cout << "\n";
	int health = ref.GetHealth();	// �´� ������ ������� �����´�.
	health -= (_fireAttack - ref.GetDefense());	// ���� ������ ���ݷ����� ���� ������ ������� ���δ�.

	ref.SetHealth(health);

	cout << ref.GetName() << "�� " << GetName() << "�� �� �����ؼ� ������� " << health << "�� ����" << endl;
	cout << "\n";

}

void Dragon::FireAttack(Ork& ref) {
	cout << "fireAttack" << endl;
	cout << "\n";
	int health = ref.GetHealth();	// �´� ������ ������� �����´�.
	health -= (_fireAttack - ref.GetDefense());	// ���� ������ ���ݷ����� ���� ������ ������� ���δ�.

	ref.SetHealth(health);

	cout << ref.GetName() << "�� " << GetName() << "�� �� �����ؼ� ������� " << health << "�� ����" << endl;
	cout << "\n";

}