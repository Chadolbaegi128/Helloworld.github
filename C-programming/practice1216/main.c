#include <stdio.h>

int main() {
	int a;
	a = 20;
	int b;
	b = 30;

	int* pa;//�������� ������(�������� 4byte)
	pa = &a;

	int* pb;
	pb = &b;

	int** ppa;
	ppa = &pa;

	int** ppb;
	ppb = &pb;

	printf("**ppa = %d, **ppb = %d\n", **ppa, **ppb);

	ppa = &pb;
	ppb = &pa;
	//���⼭ ppa���� b������ �ּҰ��� ���� pb�� �ּҰ��� ����
	//ppb���� a������ �ּҰ��� ���� pa�� �ּҰ��� ���� �ȴ�.
	printf("**ppa = %d, **ppb = %d\n", **ppa, **ppb);


	return 0;
}