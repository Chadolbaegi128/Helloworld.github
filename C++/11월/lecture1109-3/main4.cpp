#include <iostream>

using namespace std;

int main() {

	int a = 20;
	int c = 0;

	a++;//������
	cout << "a= " << a << "\n";

	a--;
	cout << "a= " << a << "\n";

	++a;//������
	cout << "a= " << a << "\n";

	--a;
	cout << "a= " << a << "\n";

	c = ++a;//������
	cout << "c= " << c << ", a = " << a << "\n";

	c = --a;
	cout << "c= " << c << ", a = " << a << "\n";

	c = a++;//������
	cout << "c= " << c << ", a = " << a << "\n";

	c = a--;
	cout << "c= " << c << ", a = " << a << "\n";

	return 0;
}