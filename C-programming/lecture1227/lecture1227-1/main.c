#include <stdio.h>

// ���ڿ��ȿ� ������ ���� �����ִ� �Լ�

//int stringLength(char src[]) 
int stringLength(char* src)
{
	int count = 0;
	while (*src) {
		count++;   // ������ ���� ����
		src++; // ���� ������ �ּ���ġ�� ����
	}

	return count;
}

// ���ڿ� ���� �Լ�
// src ���ڿ��� ���� ���� �ּҰ�
// dest ���ڿ��� ������ ����(�迭)�� ���� �ּҰ�
void stringCopy(char* dest, char* src) {

	while (*src) {
		*dest = *src;   // src��ġ�� �ִ� ���ڸ� dest�� �������� ����
		dest++; // �� ���� ������ġ�� ����
		src++; // �� ���� ������ ���ڰ� �ִ� ��ġ�� ����
	}

	*dest = '\0';   // dest�� �ǵڿ� �����Ṯ�ڸ� �־ ���ڿ��� �ϼ��Ѵ�.

}

// ���ڿ� �� �Լ�
// ������ 0�� ����, �ٸ��� 1�� ����
int stringCompare(char* str1, char* str2) {
	while (*str1) {
		if (*str1 != *str2) {
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

// �ι��ڿ��� ����
// dest ���ڿ� �ڿ� src ���ڿ��� ����.
void stringConcat(char* dest, char* src) {
	while (*dest) {
		dest++;
	}

	while (*src) {
		*dest = *src;
		dest++;
		src++;
	}

	*dest = 0; //'\0'
}

int main() {

	char str[] = "monster";
	char buff[100];

	int length = stringLength(str);

	printf("str length = %d\n", length);

	stringCopy(buff, str);

	printf("buff = %s\n", buff);

	int compare = stringCompare(str, str);

	printf("�����Ѱ�(�����ϸ� 0, �ٸ��� 1�� ��ȯ): %d\n", compare);

	char* mon = "Mon";
	char* ster = "ster is World.!!";

	stringCopy(buff, mon);
	stringConcat(buff, ster);

	printf("buff = %s\n", buff);

	return 0;
}