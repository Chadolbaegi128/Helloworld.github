#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
	int age;//나이
	char name[20];//이름
	int no;//학번
}Student;

int main() {
	Student stArray[5];

	FILE* fp;

	fp = fopen("student_info.bin", "wb");

	if (fp == NULL) {
		printf("파일 열기 실패\n");

		return 0;
	}

	for (int i = 1; i < 6; i++) {
		printf("나이 이름 학번 순으로 입력하세요: ");
		scanf("%d %s %d", &stArray[i].age, &stArray[i].name, &stArray[i].no);
	}

	fwrite(stArray, sizeof(Student), 5, fp);

	fclose(fp);

	fp = fopen("student_info.bin", "rb");

	if (fp == NULL) {
		printf("파일열기 실패\n");

		return 0;
	}

	fread(stArray, sizeof(Student), 5, fp);

	for (int i = 0; i < 5; i++) {
		printf("%d번째 학생 나이: %d, 이름: %s, 학번: %d\n", i, stArray[i].age, stArray[i].name, stArray[i].no);
	}

	fclose(fp);

	return 0;
}