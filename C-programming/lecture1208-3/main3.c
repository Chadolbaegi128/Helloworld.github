#include <stdio.h>

int main() {
	int a = 20;

	a++; //������
	printf("a++ = %d\n", a);

	++a; //������
	printf("++a = %d\n", a);

	a--;
	printf("a-- = %d\n", a);

	--a;
	printf("--a = %d\n\n", a);

	int c = 0;

	c = a++;
	printf("c = %d, a = %d\n", c, a);
	
	c = ++a;
	printf("c = %d, a = %d\n", c, a);

	c = a--;
	printf("c = %d, a = %d\n", c, a);

	c = --a;
	printf("c = %d, a = %d\n", c, a);


	return 0;
}