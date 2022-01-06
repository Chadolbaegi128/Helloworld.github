#include <stdio.h>
#include <string.h>

// C언어를 만들때 문자배열을 출력하는데 항상 배열의 사이즈값
// 도 전달을 해야 하는 문제점이 있었습니다.
// 문자열 처리함수를 만들때 약속을 했습니다.
// 문자배열뒤에 널종료 문자를 넣자 그리고 이걸 문자열이라고 하자.
void printString(char* str, int size) {
	for (int i = 0; i < size; i++) {
		putch(str[i]);
	}
}

void print(char* str, int size) {
	printString(str, size);
}

void printString2(char* str) {
	while (*str) {
		putch(*str);//한 문자 출력함수
		str++;//출력할 문자열의 크기를 정하지 않으면
		//널종료문자가 있는 곳까지 쓰레기값이 나오게 된다.
	}
}
int main() {
	char str[] = { 'M','O','N','S','T','E','R' };//문자배열
	char str2[] = "MONSTER";//문자열

	printf("str size = %d\n", sizeof(str));
	printf("str2 size = %d\n", sizeof(str2));

	print(str, 7);
	printf("\n");

	printString2(str);
	printf("\n");
	printString(str2,8);
	return 0;
}