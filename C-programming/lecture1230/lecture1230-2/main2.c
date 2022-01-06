#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* fp;

	int c;
	fp = fopen("test.txt", "r");

	if (fp == NULL) {
		printf("파일열기 실패\n");
		return 0;
	}
	else {
		printf("파일열기 성공\n");
	}

	while ((c = fgetc(fp)) != EOF) {
		putchar(c);
	}
	fclose(fp);

	return 0;
}