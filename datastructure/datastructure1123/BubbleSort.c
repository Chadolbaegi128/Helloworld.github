#include <stdio.h>

int main(void) {
	int array[] = { 2,7,5,1,10,6,4,8 };

	//�迭�� �Ҵ�� ��ü ����Ʈ��/�迭 ����� ����Ʈ��;
	int arraylength = sizeof(array) / sizeof(array[0]);//8

	//���� ����
	for (int i = 0; i < arraylength; i++) {//7
		for (int j = 0; j < arraylength - 1; j++) {//7
			if (array[j] > array[j + 1]) {
				int temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
			}
		}
	}

	for (int i = 0; i < arraylength; i++) {
		printf("%d, ", array[i]);
	}


	return 0;
}