#include <iostream>

using namespace std;

int main() {
	int a = 1;
	int b = 2;

	float result = 0.0f;

	result = a / (float)b;//(float) ����ȯ ������

	cout << a << "/" << b << " = " << result << "\n";

	return 0;
}