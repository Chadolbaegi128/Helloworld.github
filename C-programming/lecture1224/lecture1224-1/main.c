#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// ���ڿ��ȿ� ������ ���� �����ִ� �Լ�
//int stringLength(char src[])
int stringLength(char* src) {
	int number = 0;
	while (*src) {//���ڿ��� ������ ������ '\0'�� ������ ����
		number++;//������ ���� ����
		src++;//���� ������ �ּ���ġ�� ����
	}
	return number;
}

//���ڿ� ���� �Լ�
//*str: ���ڿ��� ù��° �ּҰ�
//*dest: ���ڿ��� ������ ����(�迭)�� ù��° �ּҰ�
void stringCopy(char* dest, char* str) {
	while (*str) {
		*dest = *str;
		str++;
		dest++;
	}
	*dest = '\0';
}

//���ڿ� �� �Լ�
//������ 0�� ����, �ٸ��� 1�� ����
int stringCompare(char* str1, char* str2) {
	while (*str1) {
		if (*str1 != str2) {
			if (*str1 > *str2) {
				return -1;
			}
			else {
				return 1;
			}
		}

		str1++;
		str2++;
	}

	if (*str2 == '\0') {
		return 0;
	}
	else {
		return 1;
	}

}

//�� ���ڿ��� ����
//dest ���ڿ� �ڿ� src ���ڿ��� ����.
void stringConcat(char* dest, char* src) {

}

int main() {

	char str[] = "monster";
	char str2[] = "Hello World!";
	char copy[100];
	int compare;

	int length = stringLength(str);

	printf("str length = %d\n", length);

	stringCopy(copy,str);

	printf("copy�� ����: %s\n", copy);

	stringCompare(str, str2);

	

	

	

	return 0;
}