#include <stdio.h>

// 문자열안에 문자의 갯수 세어주는 함수

//int stringLength(char src[]) 
int stringLength(char* src)
{
	int count = 0;
	while (*src) {
		count++;   // 문자의 갯수 저장
		src++; // 다음 문자의 주소위치로 증가
	}

	return count;
}

// 문자열 복사 함수
// src 문자열의 선두 번지 주소값
// dest 문자열을 저장할 공간(배열)의 선두 주소값
void stringCopy(char* dest, char* src) {

	while (*src) {
		*dest = *src;   // src위치에 있는 문자를 dest의 공간으로 복사
		dest++; // 그 다음 저장위치로 증가
		src++; // 그 다음 복사할 문자가 있는 위치로 증가
	}

	*dest = '\0';   // dest의 맨뒤에 널종료문자를 넣어서 문자열을 완성한다.

}

// 문자열 비교 함수
// 같으면 0을 리턴, 다르면 1을 리턴
int stringCompare(char* str1, char* str2) {
	while (*str1) {
		if (*str1 != *str2) {
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

// 두문자열을 결합
// dest 문자열 뒤에 src 문자열을 결합.
void stringConcat(char* dest, char* src) {
	while (*dest) {
		dest++;
	}

	while (*src) {
		*dest = *src;
		dest++;
		src++;
	}

	*dest = 0; //'\0'
}

int main() {

	char str[] = "monster";
	char buff[100];

	int length = stringLength(str);

	printf("str length = %d\n", length);

	stringCopy(buff, str);

	printf("buff = %s\n", buff);

	int compare = stringCompare(str, str);

	printf("동일한가(동일하면 0, 다르면 1을 반환): %d\n", compare);

	char* mon = "Mon";
	char* ster = "ster is World.!!";

	stringCopy(buff, mon);
	stringConcat(buff, ster);

	printf("buff = %s\n", buff);

	return 0;
}