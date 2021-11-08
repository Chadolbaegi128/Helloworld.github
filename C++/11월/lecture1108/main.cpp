#include <iostream>

using namespace std;

int main() {
	//정수형
	//음의 정수, 0, 양의 정수
	short a = -100;
	long b = -20000000;
	int c = -12999;

	unsigned short aa = 100;
	unsigned long bb = 10000000;
	unsigned int cc = 12999;

	//실수형
	float d = 2.3f;
	double e = 3.4;

	//문자형
	char A = 65;

	//논리형
	bool f = true;

	cout << "a = " << a << "\n";
	cout << "b = " << b << "\n";
	cout << "c = " << c << "\n";

	cout << "aa = " << aa << "\n";
	cout << "bb = " << bb << "\n";
	cout << "cc = " << cc << "\n";

	cout << "d = " << d << "\n";
	cout << "e = " << e << "\n";

	cout << "A = " << A << "\n";
	cout << "f = " << f << "\n";

	return 0;
}