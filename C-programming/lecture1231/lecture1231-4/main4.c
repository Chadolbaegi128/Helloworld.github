#include <stdio.h>

union Test {
	int value;
	char text[4];
	//double value2;
};

int main() {

	union Test a;

	a.value = 0x12345678;

	printf("%x %x %x %x\n", a.text[0], a.text[1], a.text[2], a.text[3]);

	return 0;
}