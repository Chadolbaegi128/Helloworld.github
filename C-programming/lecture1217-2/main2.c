#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Cash(int money) {
	
	
	if (100000 < money) {
		printf("���̵���\n");
	}
	else if (money <= 100000 && money > 80000) {
		printf("����\n");
	}
	else if (money <= 80000 && money > 60000) {
		printf("�ܽ�\n");
	}
	else if (money <= 60000 && money > 40000) {
		printf("PC��\n");
	}
	else if (money <= 40000 && money > 20000) {
		printf("��޽��ѸԱ�\n");
	}
	else {
		printf("������ ����");
	}
}

//����� ����
int main(int argc,char** argv) {
	int money = 0;

	printf("�ݾ��� �Է��ϼ���:");
	scanf("%d", &money);
	Cash(money);

	printf("�ݾ��� �Է��ϼ���: ");
	scanf("%d", &money);
	Cash(money);

	return 0;
}