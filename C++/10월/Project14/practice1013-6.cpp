#include <iostream>
#include <string>

using namespace std;

class Math {
private:
	const int F;//const�� �������
	int& ref;//������ ����

public:
	Math(int f, int &ref):F(f), ref(ref) {//������ �ʱ�ȭ ����Ʈ�� ���� ������ ������ �ʱ�ȭ ��Ŵ.
		cout << "const�� �������, ������ ����" << "\n";
		cout << "���ڰ� �ִ� ������" << "\n";
	}

	~Math() {
		cout << "�Ҹ���" << "\n";
	}

	void info() {
		cout << "const�� ��������� ���� " << F << "\n";
		cout << "������ �������� " << ref << "\n";//ref=>���۷��� �Ǵ� ��Ī�̶�� �Ѵ�. 
			}

	void SetRef(int value) {
		ref = value;
	}

};

int main() {
	int F;//������ ������ ���� ����������� ���� �ʱ�ȭ�� ���Ѿ� �Ѵ�.
	F = 500;

	Math grade(F, F);
	grade.info();
	cout << "\n";

	grade.SetRef(2000);
	grade.info();
	cout << "\n";

	{Math grade(2000, F);
	grade.SetRef(F);
	cout << "\n";
	grade.info();

	}
	cout << "\n";

	cout << "const�� ��������� ���� " << F << "\n";
}