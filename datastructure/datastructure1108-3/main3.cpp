#include <stdio.h>
#include <stdlib.h>

typedef struct tagStudent {
	int No;
	int grade;

	struct tagStudent* next;
} Student;//����� ���� ������Ÿ��(c++�� Ŭ������ ����)
//typedef=>struct�� �̸��� �������ϴ� Ű����

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