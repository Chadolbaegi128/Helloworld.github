#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a = 20;
	printf("�������� �Է��ϼ���.");
	scanf("%d", &a);

	if (a > 20) {//���� ���ǹ�
		printf("a�� 20���� ũ��.\n");
	}

	if (a > 20) {//���� ���ǹ�
		printf("a�� 20���� ũ��.\n");
	}
	else {
		printf("a�� 20���� �۰ų� ����.\n");
	}

	if (0 < a && 20 > a) {
		printf("a: %d���� 0�� 10���̿� �ִ�.\n", a);
	}

	if (!(a - 20)) {//c������ ���Ŀ� ����������� ����� �� �ִ�.
		printf("a���� 20�� ����.\n");
	}

	if (a > 20) //if���� ���� �ִ� ������ �� �����̸� �߰�ȣ�� ���� ����
		printf("a�� 20���� ũ��\n");
	

	return 0;
}