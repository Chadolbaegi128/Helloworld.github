#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int count = 0;
	int* pa;

	while (1) {
		printf("�ʿ��� ������ ������ �Է��ϼ���: (exit: -1)");
		scanf("%d", &count);

		if (count == -1)break;

		pa = (int*)malloc(sizeof(int) * count);//�����迭

		for (int i = 0; i < count; i++) {
			pa[i] = i;
		}

		for (int i = 0; i < count; i++) {
			printf("pa[%d] = %d\n", i, pa[i]);
		}

		free(pa);//�����迭 ��ȯ
	}

	return 0;
}