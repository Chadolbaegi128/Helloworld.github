#include <stdio.h>

int main() {
	//sizeof 연산자->변수나 데이터타입의 Byte단위 크기의 값을 반환시켜
	//주는 연산자
	
	int size = sizeof(char);
	printf("char형의 사이즈: %d\n\n", size);

	size = sizeof(int);
	printf("int형의 사이즈: %d\n\n", size);

	size = sizeof(short);
	printf("short형의 사이즈: %d\n\n", size);

	size = sizeof(long);
	printf("long형의 사이즈: %d\n\n", size);

	size = sizeof(float);
	printf("float형의 사이즈: %d\n\n", size);

	size = sizeof(double);
	printf("double형의 사이즈: %d\n\n", size);

	float b;

	size = sizeof(b);
	printf("b변수의 사이즈? %d\n", size);

	return 0;
}