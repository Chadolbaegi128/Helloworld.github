#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct tagStudent {
	int age;
	int grade;
	char name[50];
}Student;

int main() {
	/*
	//����ü �迭

	// ���� ������ ����ü�� ����� �����Ҷ���
   // period(.) �����ڸ� ����մϴ�.
	studentArray[0].age = 20;
	studentArray[0].grade = 3;
	strcpy(studentArray[0].name, "monster");

	
  // ���� ������ ����ü�� ����� �����Ҷ���
  // period(.) �����ڸ� ����մϴ�.
	(*(parray + 0)).age = 30;
	(*(parray + 0)).grade = 30;
	strcpy(parray + 0, "monster");

	// ������ �ּҰ��� ������ ����ü�� ����� �����Ҷ���
   // ȭ��ǥ ������(->)�� ����մϴ�.
	(parray + 0)->age = 30;
	(parray + 0)->grade = 30;
	(parray + 1)->age = 40;
	*/

	Student studentArray[10];
	Student* parray = studentArray;

	char buff[100];

	for (int i = 0; i < 10; i++) {
		(parray + i)->age = i % 5 + 10;
		(parray + i)->grade = i % 3 + 1;

		sprintf(buff, "monster_%d", i);
		strcpy((parray + i)->name, buff);
	}

	for (int i = 0; i < 10; i++) {
		printf("%d��° �л�: age: %d\n", i + 1, (parray + i)->age);
		printf("%d��° �л�: grade: %d\n", i + 1, (parray + i)->grade);
		printf("%d��° �л�: name: %s\n\n", i + 1, (parray + i)->name);
	}
	



	return 0;
}