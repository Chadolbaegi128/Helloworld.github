#include <iostream>
#include <bitset>

using namespace std;

int main() {
	int a = 2;
	int b = 3;

	// a, b������ ^(xor)�����ڸ� ����ؼ�
   // a������ ���� b������ ���� �ٲ㺸����.
	
	a = a ^ b;//a�� ���� b�� �ٲ�
	b = a ^ b ;//b�� ���� a�� �ٲ�
	a = a ^ b;

	cout << "a: " << a << '\n';
	cout << "b: " << b << "\n";
	
	return 0;
}