#include <stdio.h>

void sub(int* pa, int* pb, int* pret) {
	*pret = *pa - *pb;
}

void add(int a, int b, int* pret) {
	sub(&a, &b, pret);
	printf("%d - %d = %d\n", a, b, *pret);

	*pret = a + b;
}

void printfArray(int* pa, int size) {
	for (int i = 0; i < size; i++) {
		printf("pa[%d] = %d\n", i, pa[i]);
	}
}

int main() {
	int addpret;
	int a = 20;
	int b = 30;

	int* pa = &a;

	int array[100];//400byte
	for (int i = 0; i < 100; i++) {
		array[i] = i;
	}

	printfArray(array, 100);
	printf("\n");
	add(a, b, &addpret);
	printf("\n");
	printf("%d + %d = %d\n", a, b, addpret);

	return 0;
}