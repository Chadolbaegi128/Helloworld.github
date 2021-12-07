#include <stdio.h>
#include <stdlib.h>

//데이터를 순차적으로 저장하려면
//배열, 노드

int factorial(int num) {//재귀호출: 어떤 함수가 자기 함수 내에서 자기 자신을 호출하는 방식
	if (num == 1) {//재귀호출을 할때 조건을 제대로 정의하지 않을시 스택 오버플로가 발생하여
		return 1;//프로그램이 강제 종료된다.
	}//=>재귀호출이 종료되는 조건(if 함수)

	return num * factorial(num - 1);//num!
}

int main() {

	printf("10 factorial = %d\n", factorial(10));
	return 0;
}