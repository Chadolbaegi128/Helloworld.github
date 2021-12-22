#include <stdio.h>
#include <stdlib.h>

int main() {
	unsigned char a = 1;
	unsigned char b = 2;

	unsigned char result = a & b;//��Ʈ And
	printf("a:%d & b:&d = %d\n", a, b, result);

	result = a | b;//��Ʈ or
	printf("a:%d | b:%d = %d\n", a, b, result);

	result = a ^ b;//��Ʈ xor(exclusive or)
	printf("a:%d ^ b:%d = %d\n", a, b, result);

	result = ~a;//��Ʈ not
	printf("~a:%d = %d\n ", a, result);

	return 0;
}