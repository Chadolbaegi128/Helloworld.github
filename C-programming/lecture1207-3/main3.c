#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL)); //������ ���尪 ����
	int a = 10;
	int b = 3;

	int result = a % b;
	printf("%d %% %d = %d\n", a, b, result);

	//% �����������ڴ� Ư���� �뵵�� ���
	//������ ����(����)�� ������ �ǹ��ִ�
	//������ ������ ���ڷ� ���鶧 ����մϴ�.

	int randvalue = rand();//���� �߻�
	result = randvalue % 4;//0:��,1:��,2:��,3:��
	printf("randvalue = %d, result = %d\n", randvalue, result);

	randvalue = rand();
	result = randvalue % 4;//0:��,1:��,2:��,3:��
	printf("randvalue = %d, result = %d\n", randvalue, result);

	randvalue = rand();
	result = randvalue % 4;//0:��,1:��,2:��,3:��
	printf("randvalue = %d, result = %d\n", randvalue, result);

	randvalue = rand();
	result = randvalue % 4;//0:��,1:��,2:��,3:��
	printf("randvalue = %d, result = %d\n", randvalue, result);




	return 0;
}