#include <stdio.h>

int main() {
	int count = 10;

	//정사각형
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < count; j++) {
			printf("*");
		}
		printf("\n");
	}

	printf("\n\n");

	//속이 빈 사각형
	printf("속이 빈 사각형\n");
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count; j++)
		{
			if (i == 0 || j == 0)
			{
				printf("*");
			}
			else if (i == count - 1 || j == count - 1)
			{
				printf("*");
			}
			else
			{
				printf("");
			}
		}
		printf("\n");
	}

	//정삼각형
	printf("정삼각형\n");
	for (int i = 0; i < count; i++)
	{
		for (int j = count - 1; j > i; j--)
		{
			printf("");
		}

		for (int j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}

		printf("\n");
	}
	return 0;
}