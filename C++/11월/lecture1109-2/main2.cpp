#include <iostream>

using namespace std;

int main() {
	int x = 0;

	cout << "x�� ���� �Է��ϼ���: "<<"\n";
	cin >> x;

	int result = (x > 0) && (x < 10);

	cout << "x: " << x << "�� 0�� 10 ���̿� " << result << "\n";

	return 0;
}