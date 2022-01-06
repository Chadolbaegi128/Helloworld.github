#include <stdio.h>
#include <stdlib.h>

// 변수를 만드는 방법
// 접근범위로 보면 변수를 어떻게 나눌수 있나요?
// 전역변수, 로컬변수

int global = 0;//전역변수

int main() {

	{
		static int a = 20;//로컬변수(지역변수), 정적변수

		int local = 0;//로컬변수(지역변수),자동변수
	}

	//local = 20; // local 변수가 정의된 scoupe를 벗어나서 에러
   // malloc, calloc, realloc(동적메모리공간을 재할당시)
   // malloc은 void*를 리턴합니다. 리턴한 주소값을
   // 저장하고자하는 데이타 타입의 주소값으로 형변환을 
   // 하셔야 합니다.

	int* pa = (int*)malloc(4);//동적메모리 공간 할당 요청

	*pa = 2000;

	printf("*pa = %d\n", *pa);

	free(pa); //할당받은 동적메모리 공간이 반납처리

	return 0;
}