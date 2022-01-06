#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	FILE* fp;
	char name[20];

	int age;
	double height;
	double ave_age = 0;

	if ((fp = fopen("user_info.txt", "w")) == NULL) {
		printf("파일 열기 실패\n");
		return 0;
	}

	int i = 0;

	for (i = 0; i < 5; i++) {
		printf("%d번째 유저정보를 입력 (나이, 이름, 키 순):", i + 1);
		scanf("%d %s %lf", &age, &name, &height);
		fprintf(fp, "%d %s %lf\n", age, name, height);
	}

	fclose(fp);


	return 0;
}