#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* fp;
	fp = fopen("test.txt", "w");

	if(fp == NULL) {
		printf("���Ͽ��� ����\n");
		return 0;
	}
	else {
		printf("���Ͽ��� ����\n");
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