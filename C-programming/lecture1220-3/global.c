#include <stdio.h>
extern int global;//메인에 있는 외부변수 다른 페이지에서도 접근가능

void printGlobal() {
	printf("global = %d\n", global);
}