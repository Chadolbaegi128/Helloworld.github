#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* fp;

	int c;
	fp = fopen("test.txt", "r");

	if (fp == NULL) {
		printf("���Ͽ��� ����\n");
		return 0;
	}
	else {
		printf("���Ͽ��� ����\n");
	}

	while ((c = fgetc(fp)) != EOF) {
		putchar(c);
	}
	fclose(fp);

	return 0;
}