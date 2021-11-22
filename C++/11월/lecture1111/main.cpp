#include <iostream>

using namespace std;

int add(int a, int b)
{
	int result = a + b;

	return result;
}

int main() {
	int a = 20;
	int b = 30;

	int result = add(a, b);

	cout << a << "+" << b << "=" << result << "\n";

	return 0;
}