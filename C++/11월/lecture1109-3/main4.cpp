#include <iostream>

using namespace std;

int main() {

	int a = 20;
	int c = 0;

	a++;//후위식
	cout << "a= " << a << "\n";

	a--;
	cout << "a= " << a << "\n";

	++a;//전위식
	cout << "a= " << a << "\n";

	--a;
	cout << "a= " << a << "\n";

	c = ++a;//전위식
	cout << "c= " << c << ", a = " << a << "\n";

	c = --a;
	cout << "c= " << c << ", a = " << a << "\n";

	c = a++;//후위식
	cout << "c= " << c << ", a = " << a << "\n";

	c = a--;
	cout << "c= " << c << ", a = " << a << "\n";

	return 0;
}