#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int count = 0;
	int* pa;

	while (1) {
		printf("필요한 공간을 갯수를 입력하세요: (exit: -1)");
		scanf("%d", &count);

		if (count == -1)break;

		pa = (int*)malloc(sizeof(int) * count);//동적배열

		for (int i = 0; i < count; i++) {
			pa[i] = i;
		}

		for (int i = 0; i < count; i++) {
			printf("pa[%d] = %d\n", i, pa[i]);
		}

		free(pa);//동적배열 반환
	}

	return 0;
}