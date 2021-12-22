#include <stdio.h>
#include <stdlib.h>

int main() {
	unsigned char a = 1;
	unsigned char b = 2;

	unsigned char result = a & b;//비트 And
	printf("a:%d & b:&d = %d\n", a, b, result);

	result = a | b;//비트 or
	printf("a:%d | b:%d = %d\n", a, b, result);

	result = a ^ b;//비트 xor(exclusive or)
	printf("a:%d ^ b:%d = %d\n", a, b, result);

	result = ~a;//비트 not
	printf("~a:%d = %d\n ", a, result);

	return 0;
}