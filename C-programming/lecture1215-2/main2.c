#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

// 구조체 
// struct 구조체명
struct Student {   // 새로운 데이타 타입 => 사용자 정의 데이타 타입
	int age;   // 구조체 멤버
	int sungbyul;
	char name[20];
};


int main() {
	srand(time(NULL)); //랜덤 seed값 생성

	struct Student studentArray[20];

	/*
  int ageArray[20];   // 나이
  int sungbyulArray[20];   // 성별
  char nameArray[20][20];   // 이름. (문자열)
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
		studentArray[i].sungbyul ? printf("성별[%d]: 여자\n", i) :
			printf("성별[%d]: 남자\n", i);
		printf("name[%d]: %s\n\n", i, studentArray[i].name);
	}

	return 0;
}