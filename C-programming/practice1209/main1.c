#include <stdio.h>

int main() {
	int score = 45;

	score = score << 3;//왼쪽으로 3비트 이동(2^3제곱으로 곱하기)
	printf("score = %d\n\n", score);

	score = score >> 2;//오른쪽으로 2비트 이동(2^2제곱으로 나누기)
	printf("score = %d\n\n", score);

	return 0;
}