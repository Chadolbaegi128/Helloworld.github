#include <stdio.h>

int main() {
	int a;

	int* pa;//포인터형 변수를 만들때 사용하는
	//*는 포인터형 지정자
	//int 값을 저장하고 있는 공간의 주소값
	//저장하는 변수
	pa = &a;

	int** ppa = &pa;
	//int*** pppa=&ppa;

	**ppa;//포인터 연산자
	**&pa;
	*pa;
	*&a;
	a;

	**ppa = 200;

	//역참조해서 값을 확인
	printf("※거슬러 올라가서 값을 확인,역참조해서 변수값 확인\n");
	printf("값을 출력: **ppa = %d, **&pa = %d, *pa = %d, *&a = %d, a = %d\n\n",
		**ppa, **&pa, *pa, *&a, a);

	//해당 값이 있는 주소 확인
	printf("※해당 값이 있는 주소 확인\n");
	printf("주소값을 출력: &**ppa = %p, &**&pa = %p, &*pa = %p, &*&a = %p, &a = %p\n",
		&**ppa, &**&pa, &*pa, &*&a, &a);

	return 0;
}

