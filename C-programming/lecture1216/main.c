#include <stdio.h>

typedef struct tagGugudan {
	int first;
	int second;
	int result;
}Gugudan;

int main() {
	Gugudan array[72];

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 9; j++) {
			array[i * 9 + j].first = i + 2;
			array[i * 9 + j].second = j + 1;
			array[i * 9 + j].result = (i+2)*(j+1);
		}
	}

	for (int i = 0; i < 72; i++) {
		printf("%d x %d = %d\n", array[i].first, array[i].second,
			array[i].result);
	}

	return 0;
}