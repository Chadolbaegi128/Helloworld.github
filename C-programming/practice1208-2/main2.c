#include <stdio.h>

int main() {
	int a = 2;
	int b = 3;

	// �ٸ� ������ ������� ����
   // a������ ���� b ���� ���� �ٲټ���..

   // �̷��� temp ������ ������� ����
   // a�� b�� ���� �ٲٽø� �˴ϴ�.

	printf("a = %d, b = %d\n\n", a, b);

	//int temp = a;
	//a = b;
	//b = temp;

	//printf("a = %d, b = %d\n", a, b);

	a = a ^ b;//��Ʈ������ XOR
	b = a ^ b;
	a = a ^ b;
	printf("a = %d, b = %d\n", a, b);

	return 0;
}