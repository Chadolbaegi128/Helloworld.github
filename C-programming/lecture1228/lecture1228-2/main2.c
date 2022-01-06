#include <stdio.h>
#include <stdlib.h>

int main() {
	double* pdouble = (double*)malloc(sizeof(double));

	*pdouble = 1.2;

	printf("%lf\n", *pdouble);

	int* pa = (int*)pdouble;//int형 주소값으로 형변환

	pa[0] = 20;
	pa[1] = 30;

	printf("%d\n", pa[0]);
	printf("%d\n", pa[1]);

	char* pchar = (char*)pdouble;//char형 주소값으로 형변환
	pchar[0] = 'M';
	pchar[1] = 'O';
	pchar[2] = 'N';
	pchar[3] = 'S';
	pchar[4] = 'T';
	pchar[5] = 'E';
	pchar[6] = 'R';
	pchar[7] = '\0';

	printf("%s\n", pchar);

	free(pdouble);

	return 0;
}