#include <stdio.h>

int main() {
	int array[] = { 1,4,2,9,3,5,20,8,7 };
	//�迭�� �Ҵ�� ��ü ����Ʈ��/�迭 ����� ����Ʈ��
	int arrayLength = sizeof(array) / sizeof(array[0]);

	for (int i = 0; i < arrayLength-1; i++) {
		for (int j = 0; j < arrayLength -1; j++) {
			if (array[j] > array[j + 1]) {
				int temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
			}
		}
	}

	
	for (int i = 0; i < arrayLength; i++) {
		printf("%d, ", array[i]);
	}
	printf("\n");
	printf("count : %d", arrayLength);

	return 0;
}