#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

//����ü
//'struct ����ü��'
struct Student {//���ο� ������Ÿ��=>����� ���� ������Ÿ��
	int age; //����ü ���
	int sungbyul;
	char name[20];
};

int main() {
	//srand(time(NULL));   // ���� seed�� ����
   /*
   int age;   // ����
   int sungbyul;   // ����
   char name[20];   // �̸�. (���ڿ�)

   age = 10;
   sungbyul = 0;   // 0�� ����, 1�� ����
   name[0] = 'M';
   name[1] = 'O';
   name[2] = 'N';
   name[3] = '\0';   // �����Ṯ��

   printf("age: %d\n", age);
   sungbyul ? printf("����: ����\n") : printf("����: ����\n");
   printf("name: %s\n", name);

   int age1;   // ����
   int sungbyul1;   // ����
   char name1[20];   // �̸�. (���ڿ�)

   int age2;   // ����
   int sungbyul2;   // ����
   char name2[20];   // �̸�. (���ڿ�)

   int age3;   // ����
   int sungbyul3;   // ����
   char name3[20];   // �̸�. (���ڿ�)
   */

	//int ageArray[20];   // ����
	//int sungbyulArray[20];   // ����
	//char nameArray[20][20];   // �̸�. (���ڿ�)

	//char buff[100];

	//for (int i = 0; i < 20; i++) {
	//	ageArray[i] = rand() % 7 + 5;
	//	sungbyulArray[i] = rand() % 2;
	//	sprintf(buff, "monster_%d", i);
	//	strcpy(nameArray[i], buff);
	//}

	//for (int i = 0; i < 20; i++) {
	//	printf("age[%d]: %d\n", i, ageArray[i]);
	//	sungbyulArray[i] ? printf("����[%d]: ����\n", i) : printf("����[%d]: ����\n", i);
	//	printf("name[%d]: %s\n\n", i, nameArray[i]);
	//}

	struct Student stu;//����ü ����

	stu.age = 10;//����ü ����� �����Ҷ� '.'(period,��)�����ڸ� ���
	stu.sungbyul = 0;
	stu.name[0] = 'M';
	stu.name[1] = 'O';
	stu.name[2] = 'N';
	stu.name[3] = '\0';

	printf("stu.age = %d\n", stu.age);
	printf("stu.sungbyul = %d\n", stu.sungbyul);
	printf("stu.name = %s\n", stu.name);

	//����ü ������ ����鼭 �ٷ� �ʱ�ȭ �� �� �ֽ��ϴ�.
	struct Student stu1 = { 20,1,"Dragon" };
	printf("stu.age = %d\n", stu1.age);
	printf("stu.sungbyul = %d\n", stu1.sungbyul);
	printf("stu.name = %s\n", stu1.name);

	return 0;
}