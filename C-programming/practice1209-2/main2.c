#include <stdio.h>

int main() {
	//sizeof ������->������ ������Ÿ���� Byte���� ũ���� ���� ��ȯ����
	//�ִ� ������
	
	int size = sizeof(char);
	printf("char���� ������: %d\n\n", size);

	size = sizeof(int);
	printf("int���� ������: %d\n\n", size);

	size = sizeof(short);
	printf("short���� ������: %d\n\n", size);

	size = sizeof(long);
	printf("long���� ������: %d\n\n", size);

	size = sizeof(float);
	printf("float���� ������: %d\n\n", size);

	size = sizeof(double);
	printf("double���� ������: %d\n\n", size);

	float b;

	size = sizeof(b);
	printf("b������ ������? %d\n", size);

	return 0;
}