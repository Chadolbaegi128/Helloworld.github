#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
	int age;//����
	char name[20];//�̸�
	int no;//�й�
}Student;

int main() {
	Student stArray[5];

	FILE* fp;

	fp = fopen("student_info.bin", "wb");

	if (fp == NULL) {
		printf("���� ���� ����\n");

		return 0;
	}

	for (int i = 1; i < 6; i++) {
		printf("���� �̸� �й� ������ �Է��ϼ���: ");
		scanf("%d %s %d", &stArray[i].age, &stArray[i].name, &stArray[i].no);
	}

	fwrite(stArray, sizeof(Student), 5, fp);

	fclose(fp);

	fp = fopen("student_info.bin", "rb");

	if (fp == NULL) {
		printf("���Ͽ��� ����\n");

		return 0;
	}

	fread(stArray, sizeof(Student), 5, fp);

	for (int i = 0; i < 5; i++) {
		printf("%d��° �л� ����: %d, �̸�: %s, �й�: %d\n", i, stArray[i].age, stArray[i].name, stArray[i].no);
	}

	fclose(fp);

	return 0;
}