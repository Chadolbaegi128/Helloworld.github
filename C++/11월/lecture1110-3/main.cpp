#include <iostream>

using namespace std;

int main() {
	//초기식;조건식;증감식
	for (int i = 0; i < 10; i++) {
		cout << "i = " << i << "\n";
	}

	for (int i= 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (j == 5) {//i가 5인 경우 j 반복문은 5까지 출력된다는 의미
				break;//반복문을 탈출할 때
			}

			cout << "i = " << i << ", " << "j = " << j << "\n";
		}
	}
		

	return 0;
}