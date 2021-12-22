#include <stdio.h>

int main() {
	int array[100];

	//배열명은 할당받은 배열공간의 선두번지 주소값
	// 배열명은 배열의 첫번째 요소의 주소값
	int* parray = array;

	array + 1;
	// 주소값에 덧셈하시면 그때 더해지는 수의 의미.
	// 주소값의 데이타 타입에 따라 틀림니다.

	printf("array address: %p\n", array);
	printf("array + 1 address: %p\n", array + 1);
	printf("array + 2 address: %p\n", array + 2);

	double darray[100];

	printf("darray address: %p\n", darray);
	printf("darray + 1 address: %p\n", darray + 1);
	printf("darray + 2 address: %p\n", darray + 2);

	return 0;
}