#include <iostream>
#include <string>
#include "Monster.h"

using namespace std;

void Monster::Attack() {//����Լ�
						//'::'(��������������)�� ����־� 'Monster'Ŭ������ �����ִٴ� ���� �����ش�.
	cout << "����" << "\n";
}

void Monster::Walk() {
	cout << "�ȴ´�." << "\n";
}

void Monster::Speak() {
	cout << "���Ѵ�." << "\n";
}

void Monster::info() {
	cout << "������ ü��: " << _health << "\n";
	cout << "������ ���ݷ�: " << _attack << "\n";
	cout << "������ ����: " << _defence << "\n";
}