#include <iostream>
#include <string>
#include "Monster.h"

using namespace std;

int main() {

	Monster mons(10, 20, 30);
	

	mons.SetHealth(200);
	mons.SetAttack(150);
	mons.Setdefence(300);
	mons.info();

	
	/*int temp = 20;
	if (temp < 0) {
		mons._health = 0;
	}
	else if (temp > 100) {
		mons._health = 100;
	}
	else { mons.SetHealth = temp; }
	*/
	//=>Monster.cpp�� �ִ� 'Attack'�Լ��� ���⿡ ��ũ���Լ��� �Էµȴ�.
	//��ũ�� �Լ�: �Լ� ���������� �Լ� ����� ����.

	//Monster Ŭ������ ��������� ���� Set/Get�Լ��� ����ð� ����
	//�߰��ؼ� ����غ�����...

	return 0;
}