#include <stdio.h>

int main() {
	int score = 45;

	score = score << 3;//�������� 3��Ʈ �̵�(2^3�������� ���ϱ�)
	printf("score = %d\n\n", score);

	score = score >> 2;//���������� 2��Ʈ �̵�(2^2�������� ������)
	printf("score = %d\n\n", score);

	return 0;
}