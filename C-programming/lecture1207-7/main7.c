#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));//������ ���尪 ����
	int a = 30;
	int b = -2;
	int result = a % b;
	printf("%d %% %d = %d\n", a, b, result);

	//% �����������ڴ� Ư���� �뵵�� ����Ѵ�.
	//����(Random Number)�� ������ �ǹ��ִ�
	//������ ������ ���ڷ� ���鶧 ����մϴ�.

	int randvalue = rand();//���� �߻�
	result = randvalue % 4;//0:��,1:��,2:��,3:��
	printf("randvalue = %d, result = %d\n\n", randvalue, result);

	randvalue = rand();//���� �߻�
	result = randvalue % 4;
	printf("randvalue = %d, result = %d\n\n", randvalue, result);

	randvalue = rand();//���� �߻�
	result = randvalue % 4;
	printf("randvalue = %d, result = %d\n\n", randvalue, result);
	
	randvalue = rand();//���� �߻�
	result = randvalue % 4;
	printf("randvalue = %d, result = %d\n\n", randvalue, result);

	int Count;

	for (Count = 0; Count < 10; Count++) {
		printf("������ %d = %d\n", Count, rand());//������ ����
	}
	printf("\n");

	

	return 0;
}