#include <stdio.h>

int main() {

	int a = -20;
	short b = -20000;
	long c = -40000000;
	unsigned int d = 400;
	unsigned short e = 30000;
	unsigned long f = 50000000;

	printf("a = %d, b = %d, c = %d\n", a,b,c);
	
	printf("d = %lu, e = %d, f = %d\n", d,e,f);
	
	float score = 3.3f;
	double score2 = 41.3;

	printf("score = %f, score2 = %lf\n", score, score2);

	return 0;
}