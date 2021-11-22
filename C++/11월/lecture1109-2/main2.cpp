#include <iostream>

using namespace std;

int main() {
	int x = 0;

	cout << "x의 값을 입력하세요: "<<"\n";
	cin >> x;

	int result = (x > 0) && (x < 10);

	cout << "x: " << x << "는 0과 10 사이에 " << result << "\n";

	return 0;
}