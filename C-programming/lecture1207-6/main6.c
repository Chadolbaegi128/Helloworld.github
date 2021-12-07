#include <stdio.h>

int main() {
	int a = 40;
	int b = 30;

	int result = a != b;

	printf("%d != %d = %d\n\n", a, b, result);

	result = a < b;
	printf("%d < %d = %d\n\n", a, b, result);

	result = a > b;
	printf("%d > %d = %d\n\n", a, b, result);

	result = a <= b;
	printf("%d <= %d = %d\n\n", a, b, result);

	result = a >= b;
	printf("%d >= %d = %d\n\n", a, b, result);

	result = a == b;
	printf("%d == %d = %d\n", a, b, result);


	return 0;
}