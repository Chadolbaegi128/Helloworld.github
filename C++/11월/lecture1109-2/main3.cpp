#include <iostream>

using namespace std;

int main() {
	int a = 20;
	int b = 30;

	int result = a > b ? a : b;

	cout << result << "\n";

	(a > b) ? cout << a << "�� " << b << "���� Ů�ϴ�." : cout <<a<< "�� " << b << "���� �۽��ϴ�." << "\n";

	return 0;

}