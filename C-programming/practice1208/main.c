#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*
   int x = 0;

   printf("x�� ���� �Է��ϼ���:");
   scanf("%d", &x);

   int result = (0 < x) && (x < 10); // 0 < x < 10

   printf("x�� 0�� 10���̿� �ֳ���? %d\n", result);
   */

	//�簢�� �ȿ� �� ��ġ Ȯ��
	int topX = 0, topY = 0;
	int bottomX = 0, bottomY = 0;
	int pointX = 0, pointY = 0;

	printf("�簢���� �� ��ǥ���� �Է��ϼ���.\n");
	printf("�»�� x��: ");
	scanf("%d", &topX);
	printf("�»�� y��: ");
	scanf("%d", &topY);
	printf("���ϴ� x��: ");
	scanf("%d", &bottomX);
	printf("���ϴ� y��: ");
	scanf("%d", &bottomY);

	printf("�Է¹��� topX: %d, topY: %d, bottomX: %d, bottomY: %d\n\n", topX, topY, bottomX, bottomY);
	
	printf("���� x���� y���� �Է��ϼ���.\n");
	printf("x���� �Է��ϼ���: ");
	scanf("%d", &pointX);
	printf("y���� �Է��ϼ���: ");
	scanf("%d", &pointY);

	// �簢�� �ȿ� �Է� ���� ���� �ִ��� Ȯ�� �ϴ� ������ ���弼��....

	int resultX = (pointX < topX) && (bottomX < pointX);
	int resultY = (pointY < topY) && (bottomY < pointY);
	
	resultX&& resultY ? printf("�簢�� �ȿ� point(x,y)�� �����Ѵ�.\n") :
		printf("�簢�� �ȿ� point(x,y)�� �������� �ʴ´�.\n");



	return 0;
}