#include "Complex.h"
#include <iostream>

using namespace std;

	void Complex::info() {
		cout << _real << showpos << _imaginary << " i" << "\n";
	}
