#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char* str = "Monster";
	char* str2 = " is World";
	char* str3 = "monster";

	char buff[100];

   // 문자열 처리 함수
   // 문자열의 문자 갯수 구하는 함수: strlen

	int length = strlen(str);

	printf("str의 문자의 갯수는: %d\n", length);

	// 문자열 복사함수 : strcpy

	strcpy(buff, str);

	printf("buff: %s\n", buff);

	//문자열 비교함수: strcmp

	int compare = strcmp(str, str2);

	if (compare == 0) {
		printf("str: %s 와 str2:%s가 같습니다.\n", str, str2);
	}
	else {
		printf("str: %s 와 str2:%s가 다릅니다.\n", str, str2);
	}

	//문자열 병합 함수:strcat

	strcpy(buff, str);
	strcat(buff, str2);

	printf("str: %s + str2:%s = %s\n", str, str2, buff);

	return 0;
}