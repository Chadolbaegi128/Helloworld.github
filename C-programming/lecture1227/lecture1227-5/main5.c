#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char buff[100]; //���ڿ��� �Է¹��� ����
	int count = 0;

	char** ppstr;

	printf("�Է��Ͻ� ���ڿ��� ������ �Է��ϼ���: ");
	scanf("%d", &count);

	ppstr = (char**)calloc(count, sizeof(char*));//���ڿ��� �����ϴ� ������ �ּҰ��� �����ϴ� ���� ���� �Ҵ�

	for (int i = 0; i < count; i++) {
		printf("%d��° ���ڿ��� �Է��ϼ���: ", i + 1);
		scanf("%s", buff);
		int length = strlen(buff);//�Է� ���� ���ڿ��� ����� ���Ѵ�.

		//���ڿ��� �����ϴ� ���� ���� �Ҵ�
		ppstr[i] = (char*)malloc(length + 1); //length(���ڿ��� ���� ����)+1(�����Ṯ��-\0)

		strcpy(ppstr[i], buff);//buff�� �Է¹��� ���ڿ��� �Ҵ���� �����޸� �������� ����
		}
	printf("\n");

	printf("�Է��� ���ڿ�: \n");
	for (int i = 0; i < count; i++) {
		printf("%s\n", ppstr[i]);
	}

	//�������� ���� ���ڿ� ���� ���� �ݳ�
	for (int i = 0; i < count; i++) {
		free(ppstr[i]);
	}

	free(ppstr);//�������� ���� ���ڿ� ��������� �ּҰ��� �����ϴ� ���� �ݳ�
	//*�������� ���� ���ڿ��� �ּҰ��� �����ϴ� ������ ���� ���ֹ��� ���
	//�������� ���� ���ڿ��� �ּҰ��� �״�� ���󰡹����� �ݳ��� ���� ���
	//�޸� ������ �߻��ϰ� �Ǿ� ���� ���ڿ��� �ּҰ��� ���� ���ֹ����� �Ѵ�.

	return 0;
}