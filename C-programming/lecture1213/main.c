#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	float a = 3000.56f;

	while (a > 0) {
		a -= 3.4f;
	}

	for (float a = 3000.56f; a > 0; a -= 3.4f) {

	}

	for (; a > 0;) {

	}

	int c = 0;
	int d = 0;

	while (1) {//무한루프
		printf("첫번째 값을 입력하세요: (exit: -1)");
		scanf("%d", &c);

		if (c == -1) break;//break문은 반복문을 탈출할때
		//사용합니다. break문이 선언된
		//위치에서 가장 가까운 반복문을
		//탈출합니다.

		printf("두번째 값을 입력하세요: ");
		scanf("%d", &d);

		printf("두 값의 합은 %d 입니다.\n", c + d);
	}

	int e = 100;
	e = -1;
	while (e > 0) {
		if (e % 3 != 0) {
			e--;
			continue;// continue문은 선언된 위치 while문의
               // 조건식부분으로 분기 시킵니다.
               // continue문이 선언된 위치에서 
               // 아래쪽 코드를 실행 시키지 않고 건너뛸때
               // 사용합니다.
		}

		printf("3의 배수 %d\n", e);
		e--;
	}

	e = 100;

	// do - while 문은 반복의 조건을 뒤에서
   // 판단하기 때문에 do-while문안에 명령어 들이 한번은
   // 실행이 됩니다.
   // 하지만 사용빈도는 낮습니다.

	do {
		if (e % 3 != 0) {
			e--;
			continue;
		}
		printf("3의 배수 %d\n", e);
		e--;
	} while (e > 0);

	return 0;
}