#include <iostream>

using namespace std;

int main() {

	int a = 1;

	a = a << 1;//left shift
	cout << "a = " << a << "\n";

	a = a << 2;//left shift
	cout << "a = " << a << "\n";

	a = a >> 1;//right shift
	cout << "a = " << a << "\n";

	a = a >> 2;//right shift
	cout << "a = " << a << "\n";
}

