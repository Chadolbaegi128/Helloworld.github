#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char* str = "Monster";
	char* str2 = " is World";
	char* str3 = "monster";

	char buff[100];

   // ���ڿ� ó�� �Լ�
   // ���ڿ��� ���� ���� ���ϴ� �Լ�: strlen

	int length = strlen(str);

	printf("str�� ������ ������: %d\n", length);

	// ���ڿ� �����Լ� : strcpy

	strcpy(buff, str);

	printf("buff: %s\n", buff);

	//���ڿ� ���Լ�: strcmp

	int compare = strcmp(str, str2);

	if (compare == 0) {
		printf("str: %s �� str2:%s�� �����ϴ�.\n", str, str2);
	}
	else {
		printf("str: %s �� str2:%s�� �ٸ��ϴ�.\n", str, str2);
	}

	//���ڿ� ���� �Լ�:strcat

	strcpy(buff, str);
	strcat(buff, str2);

	printf("str: %s + str2:%s = %s\n", str, str2, buff);

	return 0;
}