#include <stdio.h>

int main(void) {
	int i = 0;//Á¤·Ä È½¼ö
	int j = 0;
	int temp = 0;
	int array[] = { 1,4,2,9,3,5,20,8,7 };
	int arrayLength = sizeof(array) / sizeof(array[0]);

	printf("¹è¿­ ÀÎ¼â \n");
	for (i = 0; i < arrayLength; i++)
	{
		printf("%d ", array[i]);
	}

	printf("\n\n»ðÀÔ Á¤·Ä \n");
	for (i = 0; i < arrayLength-1; i++)
	{
		int temp = array[i + 1];

		for (j = i; j >= 0 && array[j] > temp; j--) {
			array[j + 1] = array[j];
		}
		
		array[j + 1] = temp;
	}

	for (i = 0; i < arrayLength; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");

	return 0;
}