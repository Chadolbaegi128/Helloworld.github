#include <iostream>

using namespace std;

int main() {
	int i = 0;
	int j = 1000;
	bool isSkip = false;

    // 중첩된 반복문 탈출하기.
    while (i++ < 10) {
        while (j-- > 0) {
            if (i == 2 && j == 3) {
                isSkip = true;
                break;
            }
            cout << "i = " << i << ", " << "j = " << j << endl;
        }

        if (isSkip == true) {
            break;
        }
    }

    cout << "goto 문 사용" << endl;
    while (i++ < 10) {
        while (j-- > 0) {
            if (i == 2 && j == 3) {
                goto Exit;
            }

            cout << "i = " << i << ", " << "j = " << j << endl;

        }
    }
Exit:

    return 0;

}