#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char buff[100]; //문자열을 입력받을 공간
	int count = 0;

	char** ppstr;

	printf("입력하실 문자열의 갯수를 입력하세요: ");
	scanf("%d", &count);

	ppstr = (char**)calloc(count, sizeof(char*));//문자열을 저장하는 공간의 주소값을 저장하는 동적 공간 할당

	for (int i = 0; i < count; i++) {
		printf("%d번째 문자열을 입력하세요: ", i + 1);
		scanf("%s", buff);
		int length = strlen(buff);//입력 받은 문자열의 사이즈를 구한다.

		//문자열을 저장하는 동적 공간 할당
		ppstr[i] = (char*)malloc(length + 1); //length(문자열의 문자 갯수)+1(널종료문자-\0)

		strcpy(ppstr[i], buff);//buff에 입력받은 문자열을 할당받은 동적메모리 공간으로 복사
		}
	printf("\n");

	printf("입력한 문자열: \n");
	for (int i = 0; i < count; i++) {
		printf("%s\n", ppstr[i]);
	}

	//동적으로 만든 문자열 저장 공간 반납
	for (int i = 0; i < count; i++) {
		free(ppstr[i]);
	}

	free(ppstr);//동적으로 만든 문자열 저장공간의 주소값을 저장하는 공간 반납
	//*동적으로 만든 문자열의 주소값을 저장하는 공간을 먼저 없애버릴 경우
	//동적으로 만든 문자열의 주소값이 그대로 날라가버려서 반납할 수가 없어서
	//메모리 누락이 발생하게 되어 먼저 문자열의 주소값을 먼저 없애버려야 한다.

	return 0;
}