#include <stdio.h>

int main() {
	int i;

	//0~100사이에 숫자에서
	//짝수만 표시
	for (i=0; i <= 100; i++) {
		if (i % 2 == 0) {
			printf("i = %d\n", i);
		}
	}
	printf("\n");
	//3의 배수만 표시
	for (i = 0; i <= 100; i++) {
		if (i % 3 == 0 &&i !=0) {
			printf("i = %d\n", i);
		}
	}
	printf("\n");
	//3의 배수이면서 6의 배수인 것만 표시
	//*3의 배수 안에 6의 배수도 포함되어있어서 6의 배수만
	//*표시하면 3의 배수이면서 6의 배수인 숫자가 출력된다.
	for (i = 0; i <= 100; i++) {
		if (i % 6 == 0 && i != 0) {
			printf("i = %d\n", i);
		}
	}

	return 0;
}