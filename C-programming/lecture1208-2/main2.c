#include <stdio.h>

int main() {
	int a = 20;
	int b = 30;

	(a > b) ? printf("a:%d이 b:%d보다 크다. \n", a, b)
		: printf("a:%d이 b:%d보다 작거나 크다. \n", a, b);

	int result = (a > b) ? a : b;
	printf("a:%d와 b:%d중에 큰 값은? %d\n", a, b, result);

	return 0;
}