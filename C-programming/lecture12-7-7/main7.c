#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));//난수의 씨드값 생성
	int a = 30;
	int b = -2;
	int result = a % b;
	printf("%d %% %d = %d\n", a, b, result);

	//% 나머지연산자는 특별한 용도로 사용한다.
	//난수(Random Number)를 나에게 의미있는
	//일정한 범위의 숫자로 만들때 사용합니다.

	int randvalue = rand();//난수 발생
	result = randvalue % 4;//0:북,1:남,2:서,3:동
	printf("randvalue = %d, result = %d\n\n", randvalue, result);

	randvalue = rand();//난수 발생
	result = randvalue % 4;
	printf("randvalue = %d, result = %d\n\n", randvalue, result);

	randvalue = rand();//난수 발생
	result = randvalue % 4;
	printf("randvalue = %d, result = %d\n\n", randvalue, result);
	
	randvalue = rand();//난수 발생
	result = randvalue % 4;
	printf("randvalue = %d, result = %d\n\n", randvalue, result);

	int Count;

	for (Count = 0; Count < 10; Count++) {
		printf("난수열 %d = %d\n", Count, rand());//난수열 생성
	}
	printf("\n");

	

	return 0;
}