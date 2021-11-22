#include <iostream>

using namespace std;

int global = 10;//외부변수, 전역변수

int add(int a, int b)
{
	static int result = a + b;//로컬변수, 정적변수

	return result;
}

int main() {
	int a = 20;//로컬(지역)변수, 자동변수
	int b = 30;

	{
		int a = 30;//로컬변수, 자동변수
	}

	cout << a << " + " << b << " = " << add(a, b) << "\n";

	int* pa = new int;//4byte 정수저장공간을 동적메모리 공간에 만듦

	*pa = 2000;

	cout << "*pa = " << *pa << "\n";
	
	delete pa;

	/*
   int a0 = 0;
   int a1 = 1;
   int a2 = 2;
   //...
   int a98 = 98;
   int a99 = 99;

   if (a0 % 2 == 0) {
	  cout << "짝수입니다." << endl;
   }

   if (a1 % 2 == 0) {
	  cout << "짝수입니다." << endl;
   }

   if (a2 % 2 == 0) {
	  cout << "짝수입니다." << endl;
   }
   */

	int array[100];//배열명 주소상수

	//array=100;

	for (int i = 0; i < 100; i++)
	{
		array[i] = i;
	}

	for (int i = 0; i < 100; i++) {
		cout << "array[" << i << "] = " << array[i] << "\n";
	}

	return 0;
}