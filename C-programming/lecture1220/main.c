#include <stdio.h>

// 명령행 인자
// argc 전달된 문자열의 갯수(실행파일명 포함)
// argv 전달된 문자열의 주소값
int main(int argc,char* argv[]) {
	
	if (argc > 0) {
		for (int i = 0; i < argc; i++) {
			printf("%s\n", argv[i]);
		}
	}

	return 0;
}