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

	static int count;//정적멤버변수

	int GetGrade() {//일반멤버함수
		//일반멤버변수, 정적멤버변수 전부 접근 가능
		return grade;
	}

	static int Getcount() {//정적멤버함수
		//grade=20;=>일반멤버변수는 접근 불가
		//정적멤버변수만 접근 가능
		return count;
	}

	void info() {
		cout << "name: " << this->name << "\n";
		cout << "grade: " << this->grade << "\n";
		cout << "classNum: " <<this->classNum << "\n";
		cout << "this 포인터: " <<this << "\n";
		cout << "count: " << count << "\n";
	}
};

int Student::count = 5;

int main() {
	Student a("홍길동", 3, 10);
	a.info();
	cout << "\n";

	Student b("장길산",2,12);
	b.info();
	return 0;
}