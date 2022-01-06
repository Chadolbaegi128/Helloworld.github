#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <memory.h>
#include <string.h>

int main() {
	FILE* fp;

	char file_buff[100];
	fp = fopen("test_line.txt", "r");

	if (fp == NULL) {
		printf("파일열기 실패\n");
		return 0;
	}

	int i;
	for (i = 1; i <= 5; i++) {
		printf("파일에 적을 내용을 입력하세요(%d번째 라인)\n", i);
		memset(file_buff, 0, sizeof(file_buff));
		scanf("%s", file_buff);
		file_buff[strlen(file_buff)] = '\n';
		fputs(file_buff, fp);
	}

	while (fgets(file_buff, sizeof(file_buff), fp) != NULL) {
		printf("%s", file_buff);
		memset(file_buff, 0, sizeof(file_buff));
	}
	fclose(fp);

	return 0;
}