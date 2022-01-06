#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}

int div(int a, int b) {
	return a / b;
}

// calculator함수의 매개변수로 함수의 주소를 전달.
int calculator(int(*pfunc)(int, int), int a, int b) {
	return pfunc(a, b);
}

int GetOpCode(char* parray, char op) {//i=>pfuncArray 배열의 인덱스 번호
	for (int i = 0; i < 4; i++) {
		if (parray[i] == op) {
			return i;//배열 인덱스 번호를 리턴한다는 의미
		}
	}
	return -1;
}

int main() {
	int a = 0;
	int b = 0;
	char op = 0;

	int(*pfuncArray[4])(int, int);//함수 포인터 배열

	pfuncArray[0] = add;
	pfuncArray[1] = sub;
	pfuncArray[2] = mul;
	pfuncArray[3] = div;

	char opArray[4] = {'+', '-', 'x', '/'};

	printf("첫번째 정수값을 입력하세요: ");
	scanf("%d", &a);

	printf("두번째 정수값을 입력하세요: ");
	scanf("%d", &b);

	printf("연산 방법을 입력하세요(0(+), 1(-), 2(*), 3(/)): ");
	scanf(" %c", &op); // 두번째 정수값 입력시 엔터 입력을 걸러내기 위해서 호출


	op = GetOpCode(opArray, op);

	if (op != -1) {
		printf("%d %c %d = %d\n", a, opArray[op], b, calculator(pfuncArray[op], a, b));
	}

	return 0;
}