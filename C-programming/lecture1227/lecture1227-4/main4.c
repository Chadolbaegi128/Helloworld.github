#include <stdio.h>

int main() {
	// 문자열을 저장하는 방식 
   // 1. Rectangle 문자배열
	char Fruits[4][10] = { "Apple","Banana","Kiwi","PineApple" };
	printf("※Rectangle\n");
	for (int i = 0; i < 4; i++) {
		printf("%s\n", Fruits[i]);
	}
	printf("\n");
	// 2. Ragged 배열(jagged)
   // 문자 포인터배열
	char* pFruits[4] = { "Apple","Banana","Kiwi","PineApple" };
	printf("※Ragged\n");
	for (int i = 0; i < 4; i++) {
		printf("%s\n", pFruits[i]);
	}
	return 0;
}