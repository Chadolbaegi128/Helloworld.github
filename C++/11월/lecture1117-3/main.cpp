#include <iostream>

using namespace std;

int global = 10;//�ܺκ���, ��������

int add(int a, int b)
{
	static int result = a + b;//���ú���, ��������

	return result;
}

int main() {
	int a = 20;//����(����)����, �ڵ�����
	int b = 30;

	{
		int a = 30;//���ú���, �ڵ�����
	}

	cout << a << " + " << b << " = " << add(a, b) << "\n";

	int* pa = new int;//4byte ������������� �����޸� ������ ����

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
	  cout << "¦���Դϴ�." << endl;
   }

   if (a1 % 2 == 0) {
	  cout << "¦���Դϴ�." << endl;
   }

   if (a2 % 2 == 0) {
	  cout << "¦���Դϴ�." << endl;
   }
   */

	int array[100];//�迭�� �ּһ��

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