#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int buttonNum = 0;

	printf("��ư ��ȣ�� �Է��ϼ���: ");
	scanf("%d", &buttonNum);

	//�������� ���� �б�ÿ��� switch-case�� ���
	// 0: TV��, 1:TV��, 2:volume up, 3: volumndown
	// switch-case���� �������� ó���ϴ� case���� ��ġ��
   // �б��� �Ŀ� break ������ ���������� ��ɾ ó���մϴ�.

	switch (buttonNum)
	{case 0:
	case 1:
	case 2:
		printf("0~3 ����\n");
		break;

	case 3:
	case 4:
	case 5:
	case 10:
		//int a = 20;
		// ������ ���� ��쿡�� �߰�ȣ ���ȿ� ������ ��.
		printf("3 ~ 5, 10 ����");
		break;

	case 11:
	{
		int a = 20;
		int b = 30;
		printf("a = %d, b = %d\n",a, b);
	}
	break;
	default://default�� ���� ����
	{
		if (buttonNum > 12 && buttonNum < 60) {
			printf("���̺� ä��");
		}
	}
		break;
	}

	return 0;
}