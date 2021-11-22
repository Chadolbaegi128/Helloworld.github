#include <iostream>

using namespace std;

int main() {

	float a = 3000.123f;

	while (a > 0) {
		a -= 3.123f;
		
		cout << "a = " << a << "\n";
	}

	cout << "\n" << "\n";

	for (float i = 3000.123f; i > 0; i -= 30.123f) {
		cout << "i = " << i << "\n";
	}

	cout << "\n" << "\n";

	do {
		a -= 3.123f;
		cout << "a = " << a << "\n";
	} while (a > 0);

	cout << "\n" << "\n";
	int b = 100;

	while (b > 0) {
		if (b % 2 != 0) {
			b--;
			continue;
		}

		cout << "b = " << b << "\n";

		b--;
	}

	return 0;
}