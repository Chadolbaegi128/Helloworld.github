#include <stdio.h>
#include <conio.h>

//구조체 비트필드
typedef struct tagColor {
	unsigned short blue : 5;
	unsigned short green : 6;
	unsigned short red : 5;
}Color;

void bitPrint(unsigned short value) {
	int mask = 1;
	int count = sizeof(unsigned short) * 8;

	count--;//0부터 시작함, 하나 줄였음

	int output = 0;

	while (count >= 0) {
		mask = mask << count;
		printf("%d", value & mask ? 1 : 0);

		mask = 1;//마스크 비트 초기화

		if (count % 8 == 0) {
			printf(" ");
		}

		count--;
	}

}

int main() {
	Color a;

	a.blue = 1;
	a.green = 2;
	a.red = 3;

	union uColor {
		Color color;
		unsigned short value;
	};

	union uColor b;//공용체형 변수를 만듦
	b.color = a;//

	 //unsigned short b = (unsigned short)a; // 형변환을 할 수 없습니다.
   // 공용체형을 사용해서 형변환 효과를 만듦

	bitPrint(b.value);//Color타입을 unsigned short형 인자에 전달이 안됨.

	
	return 0;

}
