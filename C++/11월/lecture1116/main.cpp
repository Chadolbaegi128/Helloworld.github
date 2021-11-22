#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	int _Grade;//�г�, �Ϲݸ������
	int _classNum;//��
	string _Name;//�л� �̸�

public:
	static int Count; //�����������, ��ü�� �ƴ� Ŭ������ ���Ѵ�.
	//���� ��ü�� �����Ǹ� Ŭ������ ����������� �ϳ��� �����ϰ� �ȴ�.
	//�����������, ��������Լ��� ������ ������ ����������
	//�Ϲݸ������,�Ϲݸ���Լ�ó�� �� ��ü�� ���簡 �Ǵ� ���� �ƴϴ�.

	Student(int Grade, int classNum, string Name)
		:_Grade(Grade), _classNum(classNum), _Name(Name)
	{
		Count++;
	}

	~Student()
	{
		
		Count--;
	}

	void SetGrade(int grade)
	{
		_Grade = grade;
	}

	void SetClassNum(int classNum)
	{
		_classNum = classNum;
	}

	void SetName(string Name)
	{
		_Name = Name;
	}

	int GetGrade() {
		return _Grade;
	}

	int GetClassNum()
	{
		return _classNum;
	}

	string GetName()
	{
		return _Name;
	}

	void info()
	{
		cout << "�г�: " << _Grade << "\n";
		cout << "��: " << _classNum << "\n";
		cout << "�̸�: " << _Name << "\n";
		cout << "���� �л��� ��: " << Count<<"\n" << "\n";
	}
};

int Student::Count = 0;

int main() {

	Student st(2, 1, "Rabbit");
	st.info();

	{
		Student st2(2, 4, "Lion");
		st2.info();
	}

	Student st3(1, 3, "Tiger");
	st3.info();

	cout << "���� �л� ����: " << Student::Count << "\n";//Scope(��������) ������

	return 0;
}