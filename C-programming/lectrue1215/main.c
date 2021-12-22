#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

//구조체
//'struct 구조체명'
struct Student {//새로운 데이터타입=>사용자 정의 데이터타입
	int age; //구조체 멤버
	int sungbyul;
	char name[20];
};

int main() {
	//srand(time(NULL));   // 랜덤 seed값 생성
   /*
   int age;   // 나이
   int sungbyul;   // 성별
   char name[20];   // 이름. (문자열)

   age = 10;
   sungbyul = 0;   // 0은 여자, 1은 남자
   name[0] = 'M';
   name[1] = 'O';
   name[2] = 'N';
   name[3] = '\0';   // 널종료문자

   printf("age: %d\n", age);
   sungbyul ? printf("성별: 여자\n") : printf("성별: 남자\n");
   printf("name: %s\n", name);

   int age1;   // 나이
   int sungbyul1;   // 성별
   char name1[20];   // 이름. (문자열)

   int age2;   // 나이
   int sungbyul2;   // 성별
   char name2[20];   // 이름. (문자열)

   int age3;   // 나이
   int sungbyul3;   // 성별
   char name3[20];   // 이름. (문자열)
   */

	//int ageArray[20];   // 나이
	//int sungbyulArray[20];   // 성별
	//char nameArray[20][20];   // 이름. (문자열)

	//char buff[100];

	//for (int i = 0; i < 20; i++) {
	//	ageArray[i] = rand() % 7 + 5;
	//	sungbyulArray[i] = rand() % 2;
	//	sprintf(buff, "monster_%d", i);
	//	strcpy(nameArray[i], buff);
	//}

	//for (int i = 0; i < 20; i++) {
	//	printf("age[%d]: %d\n", i, ageArray[i]);
	//	sungbyulArray[i] ? printf("성별[%d]: 여자\n", i) : printf("성별[%d]: 남자\n", i);
	//	printf("name[%d]: %s\n\n", i, nameArray[i]);
	//}

	struct Student stu;//구조체 변수

	stu.age = 10;//구조체 멤버에 접근할때 '.'(period,점)연산자를 사용
	stu.sungbyul = 0;
	stu.name[0] = 'M';
	stu.name[1] = 'O';
	stu.name[2] = 'N';
	stu.name[3] = '\0';

	printf("stu.age = %d\n", stu.age);
	printf("stu.sungbyul = %d\n", stu.sungbyul);
	printf("stu.name = %s\n", stu.name);

	//구조체 변수를 만들면서 바로 초기화 할 수 있습니다.
	struct Student stu1 = { 20,1,"Dragon" };
	printf("stu.age = %d\n", stu1.age);
	printf("stu.sungbyul = %d\n", stu1.sungbyul);
	printf("stu.name = %s\n", stu1.name);

	return 0;
}