#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int salary = 0;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &salary);

	if (salary > 4000000) {
		printf("�÷��̽����̼�5\n");
	}
	else if (salary > 3000000) {
		printf("���ٵ�����ġ\n");
	}
	else if (salary > 2500000) {
		printf("��Ȧ�ο���\n");
	}
	else if (salary > 2000000) {
		printf("�ݵ�\n");
	}
	else {
		printf("����\n");
	}
	return 0;
}