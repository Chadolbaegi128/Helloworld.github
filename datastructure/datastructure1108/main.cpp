#include <stdio.h>

//call by value(�������� ���� �Լ� ȣ��)
void func(int value) {
	value = 20;
}

//call by address(pointer/�ּҰ��� ���� �Լ� ȣ��)
void func2(int* pvalue) {
	*pvalue = 20;
}

int main() {

	int a;//���ú���, �ڵ�����
	a = 20;

	int* pa;

	pa=&a;//�������� ������(�ƽ��׸�ũ ������),
	//int*->&a�� ��� �������� ������ ������ Ÿ��
	//*&a=a;

	int** ppa;//int**->&pa�� ��� �������� ������ ������ Ÿ��
	ppa = &pa;//*&pa=pa;

	int*** pppa;//int***->&ppa�� ��� �������� ������ ������ Ÿ��
	pppa = &ppa;

	**ppa;//�ּҰ��տ� ���̴� �ƽ��׸�ũ ������->������ ������
	**&pa;
	*pa;
	*&a;
	a;//'a'���� ���ŵ� �������� �������� a�� ���� ���� ����Ѵ�.

	**ppa = 100;

	//c��� ���� ���->'printf("~\n")'
	printf("&**ppa=%p, &**&pa=%p, &*pa=%p, &*&a=%p, &a=%p\n",
		&**ppa, &**&pa, &*pa, &*&a, &a);
	
	printf("**pa=%d, **&pa=%d, *pa=%d, *&a=%d, a=%d\n",
		**ppa, **&pa, *pa, *&a, a);
	return 0;
}