#include <stdio.h>

int main() {
	//�����׸���
	printf("����\n");
	for (int i = 0; i < 10; i++) {//���������� ������
		printf("*");
	}

	printf("\n\n�簢��\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("*");
		}
		printf("\n");
	}

	// ���̺� �簢��
	int i = 0;
	int j = 0;

	printf("\n���� �� �簢��\n");
	for (int i = 0; i < 10; i++) {

		for (int j = 0; j < 10; j++) {
			if (j == 0 || j == 9 || i == 0 || i == 9) {
				printf("*");
			}
			else {
				printf(" ");
			}

		}

		printf("\n");
	}



	// �����ﰢ��
	printf("\n�����ﰢ��\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	// �������ﰢ��
	printf("\n�������ﰢ��\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j <= i; j++) {
			printf(" ");
		}
		for (int j = 10; j > i; j--) {
			printf("*");
		}
		printf("\n");
	}
	// ���ﰢ��.
	printf("\n���ﰢ��\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10 - i; j++) {
			printf(" ");
		}

		for (int j = 0; j < i * 2 + 1; j++) {
			printf("*");
		}
		printf("\n");
	}

	// �� ���ﰢ��
	printf("\n�� ���ﰢ��\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 10; j >= 10 - i; j--) {
			printf(" ");
		}
		for (int j = 19; j > i * 2; j--) {
			printf("*");
		}
		printf("\n");
	}

	// ���� �� ���ﰢ��
	printf("\n���� �� ���ﰢ��\n");
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10 - i; j++) {

			printf(" ");

		}

		for (j = 0; j < i * 2 + 1; j++) {
			if (j == 0 || j == i * 2 || i == 9) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}


		printf("\n");
	}


	// ���� �� �� ���ﰢ��

	return 0;
}