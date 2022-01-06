#include <stdio.h>
#include <conio.h>

//����ü ��Ʈ�ʵ�
typedef struct tagColor {
	unsigned short blue : 5;
	unsigned short green : 6;
	unsigned short red : 5;
}Color;

void bitPrint(unsigned short value) {
	int mask = 1;
	int count = sizeof(unsigned short) * 8;

	count--;//0���� ������, �ϳ� �ٿ���

	int output = 0;

	while (count >= 0) {
		mask = mask << count;
		printf("%d", value & mask ? 1 : 0);

		mask = 1;//����ũ ��Ʈ �ʱ�ȭ

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

	union uColor b;//����ü�� ������ ����
	b.color = a;//

	 //unsigned short b = (unsigned short)a; // ����ȯ�� �� �� �����ϴ�.
   // ����ü���� ����ؼ� ����ȯ ȿ���� ����

	bitPrint(b.value);//ColorŸ���� unsigned short�� ���ڿ� ������ �ȵ�.

	
	return 0;

}
