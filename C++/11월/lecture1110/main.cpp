#include <iostream>

using namespace std;

int main() {

	int a = 20;

	if (/*���ǽ�*/a>10) {//���� ���ǹ�
		printf("a�� 10���� ũ��.\n");
	}

	if (a > 10) {//���� ���ǹ�
		printf("a�� 10���� ũ��.\n");
	}
	else {
		printf("a�� 10���� �۰ų� ũ��.\n");
	}

	//������ �������� ��쿡

	int money = 0;

	cout << "\n";
	cout << "�ݾ��� �Է��ϼ���: ";
	cin >> money;

	if ((money<=60000)&&(money>40000)) {
		cout << "\n";
		cout << "��ȭ" << "\n";
	}
	else if (money > 100000) {
		cout << "\n";
		cout << "����" << "\n";
	}
	else if ((money<=100000)&&(money>80000)) {
		cout << "\n";
		cout << "������" << "\n";
	}
	else if ((money<=80000)&&(money>60000)) {
		cout << "\n";
		cout << "��ȭ" << "\n";
	}
	else {//else ������ ���� ����
		cout << "\n";
		cout << "����" << "\n";
	}

	return 0;
}