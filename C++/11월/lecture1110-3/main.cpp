#include <iostream>

using namespace std;

int main() {
	//�ʱ��;���ǽ�;������
	for (int i = 0; i < 10; i++) {
		cout << "i = " << i << "\n";
	}

	for (int i= 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (j == 5) {//i�� 5�� ��� j �ݺ����� 5���� ��µȴٴ� �ǹ�
				break;//�ݺ����� Ż���� ��
			}

			cout << "i = " << i << ", " << "j = " << j << "\n";
		}
	}
		

	return 0;
}