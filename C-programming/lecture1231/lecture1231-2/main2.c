#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct tagStudent {
	int age;
	int grade;
	char name[20];
}Student;

int main() {
	FILE* fp;
	int count = 3;
	int size = 0;

	Student inputValue;

	fp = fopen("binary.bin", "wb");

	if (fp == NULL) {
		printf("File Open Error.");

		return 0;
	}

	for (int i = 0; i < count; i++) {
		printf("학생 정보를 입력하세요: (나이, 학년, 이름)");
		scanf("%d %d %s", &inputValue.age, &inputValue.grade, &inputValue.name);

		fwrite(&inputValue, sizeof(Student), 1, fp);
	}

	fclose(fp);

	fp = fopen("binary.bin", "rb");

	if (fp == NULL) {
		printf("File Open Error.");

		return 0;
	}

	fseek(fp, 0, SEEK_END);//파일 position을 맨뒤로 이동
	size = ftell(fp);//파일의 사이즈 확인

	fseek(fp, 0, SEEK_SET);//파일읽기 위치를 처음으로 이동
	count = size / sizeof(Student);//저장된 Student의 갯수를 계산
	Student* stdata = (Student*)malloc(size);//동적 메모리 할당
	fread(stdata, sizeof(Student), count, fp);//파일에서 데이터 읽기

	for (int i = 0; i < count; i++) {
		printf("stdata.age = %d, grade = %d, name = %s\n",
			stdata[i].age, stdata[i].grade, stdata[i].name);
	}

	fclose(fp);

	free(stdata);

	return 0;
}