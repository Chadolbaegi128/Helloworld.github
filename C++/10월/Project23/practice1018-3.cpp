#include <iostream>

using namespace std;

int main() {
	int a;
	a = 20;

	int* pa = &a; //��������������//&a=���� a�� ��ġ�� ��Ÿ���� �ּҰ�
	//*pa = 40; //�ּҰ��� ����� asterik(*) ������ ������

	int** ppa;
	ppa = &pa;

	**ppa;
	**&pa;
	*pa;
	*&a;
	a;
	//���� �����ִ� �������� ���� �����ϴ�.

	cout << "���� ���" << "\n";
	cout << "**ppa = " << **ppa << "\n";
	cout << "**&pa = " << **&pa << "\n";
	cout << "*pa = " << *pa << "\n";
	cout << "*&a = " << *&a << "\n";
	cout << "a = " << a << "\n";
	cout << "\n" << "\n";
	cout << "�ּҰ��� ���" << "\n";
	cout << "&**ppa = " << &**ppa << "\n";
	cout << "&**&pa = " << &**&pa << "\n";
	cout << "&*pa = " << &*pa << "\n";
	cout << "&*&a = " << &*&a << "\n";
	cout << "&a = " << &a << "\n";

	return 0;
}