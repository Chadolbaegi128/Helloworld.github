#include <stdio.h>
#include <string.h>

// C�� ���鶧 ���ڹ迭�� ����ϴµ� �׻� �迭�� �����
// �� ������ �ؾ� �ϴ� �������� �־����ϴ�.
// ���ڿ� ó���Լ��� ���鶧 ����� �߽��ϴ�.
// ���ڹ迭�ڿ� ������ ���ڸ� ���� �׸��� �̰� ���ڿ��̶�� ����.
void printString(char* str, int size) {
	for (int i = 0; i < size; i++) {
		putch(str[i]);
	}
}

void print(char* str, int size) {
	printString(str, size);
}

void printString2(char* str) {
	while (*str) {
		putch(*str);//�� ���� ����Լ�
		str++;//����� ���ڿ��� ũ�⸦ ������ ������
		//�����Ṯ�ڰ� �ִ� ������ �����Ⱚ�� ������ �ȴ�.
	}
}
int main() {
	char str[] = { 'M','O','N','S','T','E','R' };//���ڹ迭
	char str2[] = "MONSTER";//���ڿ�

	printf("str size = %d\n", sizeof(str));
	printf("str2 size = %d\n", sizeof(str2));

	print(str, 7);
	printf("\n");

	printString2(str);
	printf("\n");
	printString(str2,8);
	return 0;
}