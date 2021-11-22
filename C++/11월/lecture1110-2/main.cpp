#include <iostream>

using namespace std;

int main() {
	//0: TV 켜
	//1: TV 꺼
	//2: volumn up
    //3: volumn down
	int buttonNum = 0;

	cout << "버튼을 입력하세요: ";
	cin >> buttonNum;

	switch (buttonNum) {

	case 5:
	case 6:
	case 7:
		cout << "없음" << "\n";
		break;

	case 0:
		cout << "TV 꺼" << "\n";
		break;

	case 1:
		cout << "TV 켜" << "\n";
		break;

	case 2:
		cout << "volume UP" << "\n";
		break;

	case 3:
		cout << "volume Down" << "\n";
		break;

	default://생략가능
		cout << "잘못 입력하였습니다." << "\n";
		break;
	}

	return 0;
}