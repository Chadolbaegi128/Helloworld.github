#include <stdio.h>

int main() {

	// for���� �ݺ�Ƚ���� �ƴ� ��쿡 ����ϱ� ���� �����Դϴ�.
   // for(�ʱ��;���ǽ�;������)
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