#include <iostream>

using namespace std;

void func(int value) {//Call by value(������ ����), int value=a
	value = 20;
}

void func2(int* pvalue) {//Call by address(�ּҰ����� ����), int* pvalue=&a(a�� �ּҰ��� �����/�ּҰ��� �����ϴ� ������ ������)
	*pvalue = 30;
}

void func3(int& refvalue) {//Call by reference(������ ���������� ����), int& refvalue=a(int�� �ڷ��� ������
	//�� �ٸ� �̸����� ����Ǵ� �Ͱ� �Ȱ���, �ּҰ����� �����ϴ� ���� ���輺�� ���̱� ���� ����, C�� �����ϰ�
	//��� ���α׷��� �� ����)
	refvalue = 200;
}

int main() {
	int a = 100;

	func(a);//a���� ����

	cout << "a = " << a << "\n";

	func2(&a);//a�� �ּ�(�ּҰ�)�� ����

	cout << "a = " << a << "\n";

	func3(a);//a�� ���������� ����

	cout << "a = " << a << "\n";

	return 0;
}