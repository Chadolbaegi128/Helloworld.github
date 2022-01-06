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
		printf("�л� ������ �Է��ϼ���: (����, �г�, �̸�)");
		scanf("%d %d %s", &inputValue.age, &inputValue.grade, &inputValue.name);

		fwrite(&inputValue, sizeof(Student), 1, fp);
	}

	fclose(fp);

	fp = fopen("binary.bin", "rb");

	if (fp == NULL) {
		printf("File Open Error.");

		return 0;
	}

	fseek(fp, 0, SEEK_END);//���� position�� �ǵڷ� �̵�
	size = ftell(fp);//������ ������ Ȯ��

	fseek(fp, 0, SEEK_SET);//�����б� ��ġ�� ó������ �̵�
	count = size / sizeof(Student);//����� Student�� ������ ���
	Student* stdata = (Student*)malloc(size);//���� �޸� �Ҵ�
	fread(stdata, sizeof(Student), count, fp);//���Ͽ��� ������ �б�

	for (int i = 0; i < count; i++) {
		printf("stdata.age = %d, grade = %d, name = %s\n",
			stdata[i].age, stdata[i].grade, stdata[i].name);
	}

	fclose(fp);

	free(stdata);

	return 0;
}