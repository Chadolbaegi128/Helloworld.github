#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	float a = 3000.56f;

	while (a > 0) {
		a -= 3.4f;
	}

	for (float a = 3000.56f; a > 0; a -= 3.4f) {

	}

	for (; a > 0;) {

	}

	int c = 0;
	int d = 0;

	while (1) {//���ѷ���
		printf("ù��° ���� �Է��ϼ���: (exit: -1)");
		scanf("%d", &c);

		if (c == -1) break;//break���� �ݺ����� Ż���Ҷ�
		//����մϴ�. break���� �����
		//��ġ���� ���� ����� �ݺ�����
		//Ż���մϴ�.

		printf("�ι�° ���� �Է��ϼ���: ");
		scanf("%d", &d);

		printf("�� ���� ���� %d �Դϴ�.\n", c + d);
	}

	int e = 100;
	e = -1;
	while (e > 0) {
		if (e % 3 != 0) {
			e--;
			continue;// continue���� ����� ��ġ while����
               // ���ǽĺκ����� �б� ��ŵ�ϴ�.
               // continue���� ����� ��ġ���� 
               // �Ʒ��� �ڵ带 ���� ��Ű�� �ʰ� �ǳʶ۶�
               // ����մϴ�.
		}

		printf("3�� ��� %d\n", e);
		e--;
	}

	e = 100;

	// do - while ���� �ݺ��� ������ �ڿ���
   // �Ǵ��ϱ� ������ do-while���ȿ� ��ɾ� ���� �ѹ���
   // ������ �˴ϴ�.
   // ������ ���󵵴� �����ϴ�.

	do {
		if (e % 3 != 0) {
			e--;
			continue;
		}
		printf("3�� ��� %d\n", e);
		e--;
	} while (e > 0);

	return 0;
}