#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

// ����ü 
// struct ����ü��
struct Student {   // ���ο� ����Ÿ Ÿ�� => ����� ���� ����Ÿ Ÿ��
	int age;   // ����ü ���
	int sungbyul;
	char name[20];
};


int main() {
	srand(time(NULL)); //���� seed�� ����

	struct Student studentArray[20];

	/*
  int ageArray[20];   // ����
  int sungbyulArray[20];   // ����
  char nameArray[20][20];   // �̸�. (���ڿ�)
  */

	char buff[100];

	for (int i = 0; i < 20; i++) {
		studentArray[i].age = rand() % 7 + 5;
		studentArray[i].sungbyul = rand() % 2;
		sprintf(buff, "monster_%d", i);
		strcpy(studentArray[i].name, buff);
	}

	for (int i = 0; i < 20; i++) {
		printf("age[%d]: %d\n", i, studentArray[i].age);
		studentArray[i].sungbyul ? printf("����[%d]: ����\n", i) :
			printf("����[%d]: ����\n", i);
		printf("name[%d]: %s\n\n", i, studentArray[i].name);
	}

	return 0;
}