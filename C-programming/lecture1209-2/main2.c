#include <stdio.h>

int main() {
	// sizeof연산는 변수나 데이타 타입의 byte단위 사이즈의 값을 돌려
  // 줍니다.
  // 실행중에 작동한는 연산자가 아닙니다.
  // 컴파일 과정중에 미리 계산이 되어 집니다.
  // 실행중에 변경되는 변수에 쓰시면 안됩니다.

	int size = sizeof(char);//데이터타입에 사용
	printf("char형의 사이즈: %d\n\n", size);

	size = sizeof(int);//데이터타입에 사용
	printf("int형의 사이즈: %d\n\n", size);

	size = sizeof(short);//데이터타입에 사용
	printf("short형의 사이즈: %d\n\n", size);

	size = sizeof(long);//데이터타입에 사용
	printf("long형의 사이즈: %d\n\n", size);

	size = sizeof(float);//데이터타입에 사용
	printf("float형의 사이즈: %d\n\n", size);

	size = sizeof(double);//데이터타입에 사용
	printf("double형의 사이즈: %d\n\n", size);

	int a;

	size = sizeof(a);
	printf("a변수의 사이즈는: %d\n", size);

	return 0;
}