#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

struct Gugudan {
	int number1Array[10];
	
};

int main() {
	
	struct Gugudan number2Array[10];
	
	printf("number2Array�� ũ�� = %d\n", sizeof(number2Array));
	printf("Gugudan ����ü�� ũ�� = %d\n", sizeof(number2Array[0]));
	printf("\n");
	int arrayLength = sizeof(number2Array) / sizeof(number2Array[0]);

	
	//2~9�� ������ ������ �迭�� ����
	for (int i = 0; i < arrayLength; i++) {
		for (int j = 0; j < arrayLength; j++) {
			number2Array[i].number1Array[j] = i * j;
		}
	}

	
	//2~9�� ������ ���� ���
	for (int i = 2; i < arrayLength; i++) {
		printf("������ %d��\n", i);
		for (int j = 2; j < arrayLength; j++) {
			printf("%d X %d = %d\n", i, j, number2Array[i].number1Array[j]);
		}
		printf("\n");
	}

	return 0;
}