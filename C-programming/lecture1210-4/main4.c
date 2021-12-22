#include <stdio.h>

int main() {

	// for문은 반복횟수를 아는 경우에 사용하기 좋은 구조입니다.
   // for(초기식;조건식;증감식)
	for (int i = 0; i < 10; i++) {
		printf("i = % d\n", i);
		}
	printf("\n");
	for (int i = 0, j = 0; i < 10 && j < 10; i++, j++) {
		printf("i = %d, j = %d\n", i, j);
	}
	printf("\n");
	for (int i = 0, j = 10; i < 10 && j >= 0; i++, j--) {
		printf("i = %d, j = %d\n", i, j);
	}
	printf("\n");
	int i = 0;
	for (; i < 10;) {
		printf("monster_%d\n", i++);
	}
	printf("\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("i = %d, j = %d\n", i, j);
		}
	}
	printf("\n");
	return 0;
}