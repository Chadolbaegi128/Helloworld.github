#include <iostream>
#include <string>

using namespace std;

class Tiger {
private:
	string _managecode;
	string _gender;
	int _age;
	float _weight;

public:
	Tiger(string managecode)
		: _managecode(managecode), _gender(""), _age(0), _weight(0)
	{
		cout << _managecode << "������" << endl;}

	~Tiger() {//�Ҹ���(destructor)
		cout << _managecode << "�Ҹ���" << endl;
	}

	void SetManagecode(string value) {
		_managecode = value;
	}

	void info() {//����Լ�
		cout << "������ȣ: " << _managecode << endl;
		cout << "����: " << _gender << endl;
		cout << "����: " << _age << endl;
		cout << "ü��: " << _weight << endl;
	}
};

int main() {
	Tiger tiger("tiger");//��ü�� ��������� �ڵ����� ȣ�� �Ǿ����� �Լ� //������

	{cout << endl;
	Tiger tiger2("tiger2"); }//���ð�ü, �ڵ�����

	cout << endl;
	Tiger tiger3("tiger3");

	return 0;
}