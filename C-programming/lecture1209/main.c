#include <stdio.h>

int main() {
	int a = 100;

	a = a << 2;//왼쪽으로 1비트 민다는 것은 *(곱하기)2 한거와 같다.
	printf("a = %d\n", a);

	a = a << 2;
	printf("a = %d\n", a);

	a = a >> 2;//오른쪽으로 1비트 민다는 것은 /(나누기)2 한거와 같다.
	printf("a = %d\n", a);
	a = a >> 2;
	printf("a = %d\n", a);

	return 0;
}