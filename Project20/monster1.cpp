#include <iostream>
#include "practice1017-1_monster1.h"

using namespace std;

void Monster::info() {
	cout << "��ť����" << "\n";
	cout << "\n";
	cout << "����迭 ���� ü��: " << _health << "\n";
	cout << "����迭 ���� ���ݷ�: " << _attack << "\n";
	cout << "����迭 ���� ����: " << _defence << "\n";
}