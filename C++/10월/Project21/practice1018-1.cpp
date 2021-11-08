#include <iostream>

using namespace std;

class Student {
private:
	int _grade;
	int _classNum;

public:
	Student(): _grade(0), _classNum(0){}

	void Init(int grade, int classNum) {
		_grade = grade;
		_classNum = classNum;
	}

	void info() {
		cout << "�г�: " << _grade << "\n";
		cout << "��: " << _classNum << "\n";
	}
};

int main() {
	int studentCount = 0;
	Student *parray;

	int grade = 0; //�г� �Է¿�
	int classNum = 0; //�� �Է¿�

	cout << "�Է��Ͻ� �л��� ����� �Է��Ͻÿ�: " << "\n";
	cin >> studentCount; //�Է��� ���� ��Ÿ���� Ű����

	parray = new Student[studentCount];//������ü �迭

	for (int i = 0; i < studentCount; i++) {
		cout << i + 1 << "��° �л��� �г��� �Է��Ͻÿ� " << "\n";
		cin >> grade;

		cout << i + 1 << "��° �л��� ���� �Է��Ͻÿ� " << "\n";
		cin >> classNum;

		parray[i].Init(grade, classNum);
	}

	for (int i = 0; i < studentCount; i++) {
		parray[i].info();
		cout << "\n";
	}

	delete[] parray; //�������� ��ȯó��
					//�����޸𸮿� �Ҵ� ���� ��ü�� ����

	return 0;
}