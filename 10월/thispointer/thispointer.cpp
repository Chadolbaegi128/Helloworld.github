#include <iostream>
#include <stdio.h>

using namespace std;


int main() {
	
	int num_1 = 111;
	int* p = &num_1;

	int& ref1 = *p;
	int* (&ref2) = p;

	printf("%d\n", &ref1); //ref1의 주소값(참조자)//&ref1의 주소값=변수 num_1의 주소값
	printf("%d\n", ref2);//ref2가 가리키는 주소값(참조 포인터)//&ref2=변수 num_1의 주소값 
	printf("%d\n", p);//p가 가리키는 주소값//p=변수 num_1의 주소값
	printf("%d\n", &num_1);//num_1의 주소값//*p=p가 가리키는 주소에 들어있는 변수값
	printf("%d\n", &ref2);//ref2의 주소값//*(ref2)=&ref2가 가리키는 주소에 들어있는 변수값
	

	return 0;
}