#include <iostream>
#include <string>
using namespace std;

template <typename T> // template 함수
T add(T a, T b) {
	return a + b;
}

template <>
string add(string a, string b) {   // template 함수 특수화
	return "not add";
}


/*
int add(int a, int b) {
   return a + b;
}

float add(float a, float b) {
   return a + b;
}

double add(double a, double b) {
   return a + b;
}
*/

int main() {
	int a = 20;
	int b = 30;
	float c = 1.2f;
	float d = 3.4f;

	double f = 10.3;
	double g = 40.49;

	string h = "monster";
	string i = "is world.";

	cout << a << " + " << b << " = " << add(a, b) << endl;
	cout << c << " + " << d << " = " << add(c, d) << endl;
	cout << f << " + " << g << " = " << add(f, g) << endl;

	cout << add(h, i);


	return 0;
}