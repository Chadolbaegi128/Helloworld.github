#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num = 0;

Start:
	printf("1�� ������ �ݺ��մϴ�.(0: exit)");
	scanf("%d", &num);

	if (num == 1) {
		goto Start;//����� �б�(����� �б�� ����õ)
	}
	else {
		goto Exit;//����� �б�(�������)
	}
	printf("��¾ȵ�");

Exit://���̺�

	return 0;
}