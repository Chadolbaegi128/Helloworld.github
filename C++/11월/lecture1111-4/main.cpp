#include <iostream>
#include <string>

using namespace std;

class Son {// ĸ��ȭ->������ Ÿ���� ����('Son'�̶�� �̸��� ���� Ŭ������ ������ Ÿ��)
private://�ܺο� �������� �ʴ� �κ��� ����=>Set,Get �Լ��� ���ؼ��� ���� ����(�ǰ� ����)
	int birthday;//�������, ��ü�� �Ӽ��̶�� �Ѵ�(attribute, property)
	string address;
	string name;
	string juminNum;

public:
	//Set,Get �Լ�->private ������ �ִ� ��������� �ܺο��� ����ϱ� ���� ���̴� �Լ�
	//�ǹ������� ���Ǵ� ���� �ƴϳ�, ���� �߻��� �ּ�ȭ�ϱ� ���� ����
	void SetBirthday(int value) {
		if (value > 100) {
			birthday = 100;
		}
		else if (value < 0) {
			birthday = 0;
		}
		else {
			birthday = value;
		}
	}

	int GetBirthday() {
		return birthday;
	}

	void SetAddress(string value) {
		address = value;
	}

	string GetAddress() {
		return address;
	}

	void SetName(string value){
		name = value;
	}

	string GetName() {
		return name;
	}

	void SetjuminNum(string value) {
		juminNum = value;
	}

	string GetjuminNum() {
		return juminNum;
	}
};

int main() {
	Son a;
	Son b;
	Son c;

	a.SetBirthday(20);
	cout << a.GetBirthday() << "\n";

	a.SetAddress("����");
	cout << a.GetAddress() << "\n";

	a.SetName("�����");
	cout << a.GetName() << "\n";

	a.SetjuminNum("12312312312");
	cout << a.GetjuminNum() << "\n";


	return 0;
}