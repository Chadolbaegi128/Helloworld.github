#include <stdio.h>

int main() {
	// ���ڿ��� �����ϴ� ��� 
   // 1. Rectangle ���ڹ迭
	char Fruits[4][10] = { "Apple","Banana","Kiwi","PineApple" };
	printf("��Rectangle\n");
	for (int i = 0; i < 4; i++) {
		printf("%s\n", Fruits[i]);
	}
	printf("\n");
	// 2. Ragged �迭(jagged)
   // ���� �����͹迭
	char* pFruits[4] = { "Apple","Banana","Kiwi","PineApple" };
	printf("��Ragged\n");
	for (int i = 0; i < 4; i++) {
		printf("%s\n", pFruits[i]);
	}
	return 0;
}