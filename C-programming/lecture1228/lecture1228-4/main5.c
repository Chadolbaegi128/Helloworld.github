#include <stdio.h>
#include "HEAD.h"

int add(int a, int b) {
	return a + b;
}

int main() {
	int a = 20;
	int b = 30;

	int ret = add(a, b);

	printf("%d + %d = %d\n", a, b, ret);

	return 0;
}

