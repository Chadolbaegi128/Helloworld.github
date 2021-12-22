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
	
	printf("number2Array의 크기 = %d\n", sizeof(number2Array));
	printf("Gugudan 구조체의 크기 = %d\n", sizeof(number2Array[0]));
	printf("\n");
	int arrayLength = sizeof(number2Array) / sizeof(number2Array[0]);

	
	//2~9단 구구단 정보를 배열에 저장
	for (int i = 0; i < arrayLength; i++) {
		for (int j = 0; j < arrayLength; j++) {
			number2Array[i].number1Array[j] = i * j;
		}
	}

	
	//2~9단 구구단 정보 출력
	for (int i = 2; i < arrayLength; i++) {
		printf("구구단 %d단\n", i);
		for (int j = 2; j < arrayLength; j++) {
			printf("%d X %d = %d\n", i, j, number2Array[i].number1Array[j]);
		}
		printf("\n");
	}

	return 0;
}