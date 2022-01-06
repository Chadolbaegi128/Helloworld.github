#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct tagStudent {
	int age;
	int grade;
	char name[50];
}Student;

int main() {
	/*
	//구조체 배열

	// 값을 가지고 구조체의 멤버에 접근할때는
   // period(.) 연산자를 사용합니다.
	studentArray[0].age = 20;
	studentArray[0].grade = 3;
	strcpy(studentArray[0].name, "monster");

	
  // 값을 가지고 구조체의 멤버에 접근할때는
  // period(.) 연산자를 사용합니다.
	(*(parray + 0)).age = 30;
	(*(parray + 0)).grade = 30;
	strcpy(parray + 0, "monster");

	// 공간의 주소값을 가지고 구조체의 멤버에 접근할때는
   // 화살표 연산자(->)를 사용합니다.
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
		printf("%d번째 학생: age: %d\n", i + 1, (parray + i)->age);
		printf("%d번째 학생: grade: %d\n", i + 1, (parray + i)->grade);
		printf("%d번째 학생: name: %s\n\n", i + 1, (parray + i)->name);
	}
	



	return 0;
}