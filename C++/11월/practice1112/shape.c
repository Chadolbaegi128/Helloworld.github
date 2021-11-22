#include <stdio.h>

int main() {
	int count = 11;

	//Á¤»ç°¢Çü
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < count; j++) {
			printf("*");
		}
		printf("\n");
	}

	printf("\n\n");

	//¼ÓÀÌ ºó »ç°¢Çü
	printf("¼ÓÀÌ ºó »ç°¢Çü\n");
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

	//Á÷»ï°¢Çü
	printf("Á÷»ï°¢Çü\n");
	for (int i = 0; i < count; i++)
	{
		for (int j = count-1; j > i; j--)
		{
			printf("");
		}

		for (int j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}

		printf("\n");
	}

	//Á¤»ï°¢Çü
	printf("Á¤»ï°¢Çü\n");
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 0; j < 5 - count; j++)
		{
			printf(" ");
		}
		for (int j = 1; j < i * 2; j++)
		{
			printf("*");
		}

		printf("\n");
	}
		return 0;
}