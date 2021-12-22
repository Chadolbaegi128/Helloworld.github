#include <stdio.h>

int main() {
	/*
  int a0 = 0;
  int a1 = 1;
  int a2 = 2;

  int a3 = 3, a4 = 4, a5 = 5 .....a100 = 100;

  if (a0 % 2 == 0) {
	 printf("%d\n", a0);
  }

  if (a1 % 2 == 0) {
	 printf("%d\n", a1);
  }
  */
//=>데이터를 일일히 하나하나 집어넣는 것이 비효율적인 작업이어서
//배열을 사용하는 것이 좋다.

	int array[101];

	for (int i = 0; i < 101; i++) {
		array[i] = i;
	}

	for (int i = 0; i < 101; i++) {
		printf("array[%d] = %d\n", i, array[i]);
	}

	printf("\n");

	for (int i = 100,j=0; i >= 0; i--,j++) {
		array[j] = i;
	}

	int i = 0;

	while (array[i]) {
		printf("array[%d] = %d\n", i, array[i++]);
	}


	return 0;
}