#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	string name;
	int grade;
	int classNum;

public:
	Student(string name, int grade, int classNum):
		name(name), grade(grade), classNum(classNum) {

	}

	static int count;//�����������

	int GetGrade() {//�Ϲݸ���Լ�
		//�Ϲݸ������, ����������� ���� ���� ����
		return grade;
	}

	static int Getcount() {//��������Լ�
		//grade=20;=>�Ϲݸ�������� ���� �Ұ�
		//������������� ���� ����
		return count;
	}

	void info() {
		cout << "name: " << this->name << "\n";
		cout << "grade: " << this->grade << "\n";
		cout << "classNum: " <<this->classNum << "\n";
		cout << "this ������: " <<this << "\n";
		cout << "count: " << count << "\n";
	}
};

int Student::count = 5;

int main() {
	Student a("ȫ�浿", 3, 10);
	a.info();
	cout << "\n";

	Student b("����",2,12);
	b.info();
	return 0;
}