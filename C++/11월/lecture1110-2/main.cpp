#include <iostream>

using namespace std;

int main() {
	//0: TV ��
	//1: TV ��
	//2: volumn up
    //3: volumn down
	int buttonNum = 0;

	cout << "��ư�� �Է��ϼ���: ";
	cin >> buttonNum;

	switch (buttonNum) {

	case 5:
	case 6:
	case 7:
		cout << "����" << "\n";
		break;

	case 0:
		cout << "TV ��" << "\n";
		break;

	case 1:
		cout << "TV ��" << "\n";
		break;

	case 2:
		cout << "volume UP" << "\n";
		break;

	case 3:
		cout << "volume Down" << "\n";
		break;

	default://��������
		cout << "�߸� �Է��Ͽ����ϴ�." << "\n";
		break;
	}

	return 0;
}