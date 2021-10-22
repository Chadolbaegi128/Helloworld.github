#include <iostream>
#include "math2.h"

using namespace std;

//일반화, 특수화(구조적)
//유지보수성
//기능 확장


int main() {
	int a = 20;
	int b = 30;

	Math2 math;
	
	cout << a << "+" << b << "=" << math.add(a,b) << "\n";
	cout << a << "-" << b << "=" << math.sub(a,b)<< "\n";
	cout << a << "*" << b << "=" << math.multi(a,b)<< "\n";
	cout << a << "/" << b << "=" << math.div(a,b)<< "\n";


	return 0;
}