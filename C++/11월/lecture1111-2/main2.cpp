#include <iostream>
#include <string>

using namespace std;

class Son {//ĸ��ȭ->'Son'�̶�� Ŭ������ ������ Ÿ�� ����
public:
	int birthday;//�������
	string address;
	string name;
	string juminNum;

};

int main() {
	Son a;//Ŭ������ ������ Ÿ������ ������� ����->��ü(object)
	a.birthday = 19871111;// �ν��Ͻ�(instance)->��ü�� ������ ����
	a.address = "����";// �ν��Ͻ�(instance)->��ü�� ������ ����
	a.name = "�����";// �ν��Ͻ�(instance)->��ü�� ������ ����
	a.juminNum = "12312312312312";// �ν��Ͻ�(instance)->��ü�� ������ ����

	cout << "�������: " << a.birthday << "\n";
	cout << "�ּ�: " << a.address << "\n";
	cout << "�̸�: " << a.name << "\n";
	cout << "�ֹι�ȣ: " << a.juminNum << "\n";

	return 0;
}