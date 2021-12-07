#include <stdio.h>
#include <stdlib.h>

typedef struct tagStudent {
	int No;
	int grade;

	struct tagStudent* next;
} Student;//사용자 정의 데이터타입(c++의 클래스와 유사)
//typedef=>struct의 이름을 재정의하는 키워드

int main() {
	struct tagStudent st;

	Student stu1 = { 0,3,NULL };
	Student stu2 = { 1,2,NULL };
	Student stu3 = { 2,1,NULL };

	stu1.No = 1234;

	(&stu1) -> grade = 1;

	stu1.next = &stu2;
	stu2.next = &stu3;

	printf("stu3.No=%d\n", stu1.next->next->No);
	printf("stu3.grade=%d\n", stu1.next->next->grade);
}