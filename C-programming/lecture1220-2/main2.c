#include <stdio.h>
#include <string.h>

// 명령행 인자
// argc 전달된 문자열의 갯수(실행파일명 포함)
// argv 전달된 문자열의 주소값
int main(int argc, char* argv[]) {

	int left = atoi(argv[1]);
	int right = atoi(argv[2]);

	printf("%d + %d = %d\n", left, right, left + right);



	return 0;
}