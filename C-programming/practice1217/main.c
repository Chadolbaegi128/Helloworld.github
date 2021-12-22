#include <stdio.h>

void Swap(int *pa, int *pb) {
	int temp;
	
	temp = *pa;
	*pa = *pb;
	*pb = temp;		
}

int main() {
	int a = 20;
	int b = 10;

	Swap(&a, &b);
	
	printf("a = %d, b = %d\n", a, b);


	return 0;
}