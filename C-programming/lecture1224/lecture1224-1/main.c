#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 문자열안에 문자의 갯수 세어주는 함수
//int stringLength(char src[])
int stringLength(char* src) {
	int number = 0;
	while (*src) {//문자열의 마지막 문자인 '\0'이 나오면 종료
		number++;//문자의 갯수 저장
		src++;//다음 문자의 주소위치로 증가
	}
	return number;
}

//문자열 복사 함수
//*str: 문자열의 첫번째 주소값
//*dest: 문자열을 저장할 공간(배열)의 첫번째 주소값
void stringCopy(char* dest, char* str) {
	while (*str) {
		*dest = *str;
		str++;
		dest++;
	}
	*dest = '\0';
}

//문자열 비교 함수
//같으면 0을 리턴, 다르면 1을 리턴
int stringCompare(char* str1, char* str2) {
	while (*str1) {
		if (*str1 != str2) {
			if (*str1 > *str2) {
				return -1;
			}
			else {
				return 1;
			}
		}

		str1++;
		str2++;
	}

	if (*str2 == '\0') {
		return 0;
	}
	else {
		return 1;
	}

}

//두 문자열을 결합
//dest 문자열 뒤에 src 문자열을 결합.
void stringConcat(char* dest, char* src) {

}

int main() {

	char str[] = "monster";
	char str2[] = "Hello World!";
	char copy[100];
	int compare;

	int length = stringLength(str);

	printf("str length = %d\n", length);

	stringCopy(copy,str);

	printf("copy된 문자: %s\n", copy);

	stringCompare(str, str2);

	

	

	

	return 0;
}