#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* fp;
	fp = fopen("test.txt", "w");

	if(fp == NULL) {
		printf("파일열기 실패\n");
		return 0;
	}
	else {
		printf("파일열기 성공\n");
	}

	fputc('a', fp);
	fputc('b', fp);
	fputc('c', fp);
	fputc('d', fp);
	fputc('\n', fp);
	fputc('a', fp);
	fputc('b', fp);
	fputc('c', fp);
	fputc('d', fp);
	fputc('e', fp);

	for (int i = 0; i < 27; i++) {
		fputc('a' + i, fp);
	}

	fclose(fp);

	return 0;
}