#include <iostream>

using namespace std;

class Student {
private:
	int _age; //����
	int _grade; //�г�
	int _classNum; //�ݹ�ȣ
	string _name; //�̸�

public:
	//���ڸ� �޴� ������
	//�⺻������ ���� ���� �ʱ�ȭ��Ű��
	//���ο� info�Լ��� ���� ����غ�����.

	Student(int age, int grade, int classNum, string name) :
		_age(age), _grade(grade), _classNum(classNum), _name(name) //��� �ʱ�ȭ ����Ʈ�� ���� ��� ������ ���� �ʱ�ȭ �� �� �ִ�.
	{
	//������ �ʱ�ȭ ����Ʈ�� ����� ��� ���⿡ ���� �Ҵ��� �ʿ䰡 ����.
	}

	void info() {
		cout << "��ü Student 1�� ����: " << _age << endl;
		cout << "��ü Student 1�� �г�: " << _grade << endl;
		cout << "��ü Student 1�� �ݹ�ȣ: " << _classNum << endl;
		cout << "��ü Student 1�� �̸�: " << _name << endl;

	}

	//�����ڿ� ���ڸ� �ְ� �Ǹ� ������ ��� �Լ��� ���� �ʾƵ� �ȴ�.
	
};

int main() {
	Student student(17,1,12,"ȫ�浿");
	
	student.info();
}