#include <stdio.h>

int main() {
	int array[100];

	//�迭���� �Ҵ���� �迭������ ���ι��� �ּҰ�
	// �迭���� �迭�� ù��° ����� �ּҰ�
	int* parray = array;

	array + 1;
	// �ּҰ��� �����Ͻø� �׶� �������� ���� �ǹ�.
	// �ּҰ��� ����Ÿ Ÿ�Կ� ���� Ʋ���ϴ�.

	printf("array address: %p\n", array);
	printf("array + 1 address: %p\n", array + 1);
	printf("array + 2 address: %p\n", array + 2);

	double darray[100];

	printf("darray address: %p\n", darray);
	printf("darray + 1 address: %p\n", darray + 1);
	printf("darray + 2 address: %p\n", darray + 2);

	return 0;
}