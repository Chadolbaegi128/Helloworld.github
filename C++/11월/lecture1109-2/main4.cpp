#include <iostream>
#include <bitset>

using namespace std;

int main() {
	int a = 2;
	int b = 3;

	// a, b변수와 ^(xor)연산자만 사용해서
   // a변수의 값과 b변수의 값을 바꿔보세요.
	
	a = a ^ b;//a의 값이 b로 바뀜
	b = a ^ b ;//b의 값이 a로 바뀜
	a = a ^ b;

	cout << "a: " << a << '\n';
	cout << "b: " << b << "\n";
	
	return 0;
}