#include <stdio.h>

int main() {
	//�ǽ�
	//1���� �迭�� 0~100 ������ ���ڸ� �����ϰ�
	//3�� ����� ����غ�����.
	//3�� ����� ��ҿ� ���ϱ� 2�� �ؼ� �����ϰ� ����غ�����.

	//2���� �迭�� �������� ������� �Է��Ͻð�
	//����غ�����.

	int array[101];

	printf("3�� ��� ���\n");
	for (int i = 0; i < 101; i++) {
		array[i] = i;
	}

	for (int i = 3; i < 101; i++) {
		if (array[i] % 3 == 0) {
			printf("array[%d] = %d\n", i,array[i]);
		}
	}

	printf("\n3�� ����� ��ҿ� 2�� ���� �Ŀ� ���\n");
	for (int i = 0; i < 101; i++) {
		if (array[i] % 3 == 0) {
			array[i] = i * 2;
		}
	}

	for (int i = 3; i < 101; i++) {
		if (array[i] % 3 == 0) {
			printf("array[%d] = %d\n", i, array[i]);
		}
	}

	int array2[10][10];
	printf("\n2���� �迭�� ���� ������ ���\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			array2[i][j] = i * j;
		}
	}

	for (int i = 2; i < 10; i++) {
		for (int j = 2; j < 10; j++) {
			printf("array2[%d][%d] = %d\n", i, j, array2[i][j]);
		}
	}

	int gugudan[9][10];
	printf("\n������\n");
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 10; j++) {
			gugudan[i][j] = i * j;
		}
	}

	for (int i = 2; i < 9; i++) {
		for (int j = 2; j < 10; j++) {
			printf("gugudan[%d][%d] = %d\n", i, j, gugudan[i][j]);
		}
	}

	return 0;
}