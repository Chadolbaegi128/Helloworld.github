#include <stdio.h>

int main() {

	int T = 1;
	int F = 0;

	int result = T && T;
	printf("True && True = %d\n", result);

	result = T && F;
	printf("True && False = %d\n", result);

	result = F && T;
	printf("False && True = %d\n", result);

	result = F && F;
	printf("False && False = %d\n\n", result);

	result = T || T;
	printf("True || True = %d\n", result);

	result = T || F;
	printf("True || False = %d\n", result);

	result = F || T;
	printf("False || True = %d\n", result);

	result = F || F;
	printf("False || False = %d\n\n", result);

	result = !T;
	printf("!True = %d\n", result);

	result = !F;
	printf("!False = %d\n", result);

	return 0;
}