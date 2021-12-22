#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

//구조체
//'struct 구조체명'
struct Student {
	int age;//구조체 멤버
	int sungbyul;
	char name[20];
};

int main() {
	struct Student studentArray[5];

	//배열 요소의 갯수를 입력한다.
	printf("studentArray size = %d\n", sizeof(studentArray)); //배열의 전체 byte 값
	printf("struct 요소 size = %d\n", sizeof(studentArray[0])); //배열 요소의 byte 값
	int arrayLength = sizeof(studentArray) / sizeof(studentArray[0]);//배열 요소의 갯수

	for (int i = 0; i < arrayLength; i++) {
		printf("%d번째 학생의 나이를 입력해보세요: ", i + 1);//0번째는 존재하지 않는 숫자이길래 1을 더해준 것이다.
		scanf("%d", &studentArray[i].age);
		printf("%d번째 학생의 성별을 입력하세요:(0-여자, 1-남자)", i + 1);
		scanf("%d", &studentArray[i].sungbyul);
		printf("%d번째 학생의 이름을 입력하세요:(공백없이)", i + 1);
		scanf("%s", studentArray[i].name);
	}

	for (int i = 0; i < arrayLength; i++) {
		printf("age[%d]: %d\n", i, studentArray[i].age);
		studentArray[i].sungbyul ? printf("성별[%d]: 남자\n", i) :
			printf("성별[%d]: 여자\n", i);
		printf("name[%d]: %s\n\n", i, studentArray[i].name);
	}

	return 0;
}