#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

//����ü
//'struct ����ü��'
struct Student {
	int age;//����ü ���
	int sungbyul;
	char name[20];
};

int main() {
	struct Student studentArray[5];

	//�迭 ����� ������ �Է��Ѵ�.
	printf("studentArray size = %d\n", sizeof(studentArray)); //�迭�� ��ü byte ��
	printf("struct ��� size = %d\n", sizeof(studentArray[0])); //�迭 ����� byte ��
	int arrayLength = sizeof(studentArray) / sizeof(studentArray[0]);//�迭 ����� ����

	for (int i = 0; i < arrayLength; i++) {
		printf("%d��° �л��� ���̸� �Է��غ�����: ", i + 1);//0��°�� �������� �ʴ� �����̱淡 1�� ������ ���̴�.
		scanf("%d", &studentArray[i].age);
		printf("%d��° �л��� ������ �Է��ϼ���:(0-����, 1-����)", i + 1);
		scanf("%d", &studentArray[i].sungbyul);
		printf("%d��° �л��� �̸��� �Է��ϼ���:(�������)", i + 1);
		scanf("%s", studentArray[i].name);
	}

	for (int i = 0; i < arrayLength; i++) {
		printf("age[%d]: %d\n", i, studentArray[i].age);
		studentArray[i].sungbyul ? printf("����[%d]: ����\n", i) :
			printf("����[%d]: ����\n", i);
		printf("name[%d]: %s\n\n", i, studentArray[i].name);
	}

	return 0;
}