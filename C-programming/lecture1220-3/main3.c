#include <stdio.h>
// C언어에서 변수의 선언 위치 
// 변수의 선언 위치에 따라서 존속기간
// 존속기간, 접근범위
int global = 0;//외부변수(전역변수)
//프로그램이 실행될때 할당되고 프로그램이 종료될때
//없어집니다.
//외부변수를 남용할 경우 프로그램 흐름이 꼬일
//확률이 높기 때문에 권장하지 않는다.

int add(int a, int b) {
	int sum;//로컬변수(지역변수),자동변수
	sum = a + b;

	global = 20;//외부변수

	{
		int sum;
	}

	return sum;
}

int score(int value) {
	static int score = 0;//로컬변수, 정적변수(변수 생성시 초기화 한번)
	//정적변수는 메모리 할당이 해제되지 않습니다.
	//프로그램이 실행되는 동안 공간이 유지됩니다.

	score += value;

	return score;
}

int main() {
	int a = 20;
	int b = 30;

	int sum = add(a, b);

	global = 100;//외부변수는 어디서나 접근가능

	for (int i = 0; i < 10; i++) {
		score(i);
	}

	printf("score = %d\n", score(0));

	printGlobal();

	return 0;
}