#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int money = 0;
	printf("�뵷�� �Է��ϼ���: ");
	scanf("%d", &money);

	if (money <= 20000 && money > 10000) {
		printf("������ ���\n");
	}
	else if (money > 100000) {//���� ���ǹ�(������ ���� ���� ��� ���)
		printf("��ȭ\n");
	}
	else if (money<=100000 && money > 60000) {
		printf("PC��\n");
	}
	else if (money<=60000 && money > 40000) {
		printf("�߱���\n");
	}
	else if (money<=40000 && money > 20000) {
		printf("�籸��\n");
	}
	else {//else���� ������ ����(�̵����� �ƴҶ�)
		printf("������ ����\n");
	}

	return 0;
}