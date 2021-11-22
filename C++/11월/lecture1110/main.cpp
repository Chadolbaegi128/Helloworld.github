#include <iostream>

using namespace std;

int main() {

	int a = 20;

	if (/*조건식*/a>10) {//단일 조건문
		printf("a가 10보다 크다.\n");
	}

	if (a > 10) {//이중 조건문
		printf("a가 10보다 크다.\n");
	}
	else {
		printf("a가 10보다 작거나 크다.\n");
	}

	//조건이 여러개인 경우에

	int money = 0;

	cout << "\n";
	cout << "금액을 입력하세요: ";
	cin >> money;

	if ((money<=60000)&&(money>40000)) {
		cout << "\n";
		cout << "영화" << "\n";
	}
	else if (money > 100000) {
		cout << "\n";
		cout << "쇼핑" << "\n";
	}
	else if ((money<=100000)&&(money>80000)) {
		cout << "\n";
		cout << "볼링장" << "\n";
	}
	else if ((money<=80000)&&(money>60000)) {
		cout << "\n";
		cout << "영화" << "\n";
	}
	else {//else 구문은 생략 가능
		cout << "\n";
		cout << "낮잠" << "\n";
	}

	return 0;
}