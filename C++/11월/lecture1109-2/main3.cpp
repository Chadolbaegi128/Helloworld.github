#include <iostream>

using namespace std;

int main() {
	int a = 20;
	int b = 30;

	int result = a > b ? a : b;

	cout << result << "\n";

	(a > b) ? cout << a << "가 " << b << "보다 큽니다." : cout <<a<< "가 " << b << "보다 작습니다." << "\n";

	return 0;

}