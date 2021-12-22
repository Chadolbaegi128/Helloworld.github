#include <stdio.h>

int main() {
	int i=0;
	int j=0;
	
	printf("삼각형 만들기\n");

	for (int i = 0; i < 10; i++) {
		for (int j = 10; j > 10-i; j--) {
			printf(" ");
		}
		for (int j = 0; j < i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}


	return 0;
}