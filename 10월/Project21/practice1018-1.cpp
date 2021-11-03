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
		cout << "학년: " << _grade << "\n";
		cout << "반: " << _classNum << "\n";
	}
};

int main() {
	int studentCount = 0;
	Student *parray;

	int grade = 0; //학년 입력용
	int classNum = 0; //반 입력용

	cout << "입력하실 학생의 명수를 입력하시오: " << "\n";
	cin >> studentCount; //입력할 값을 나타내는 키워드

	parray = new Student[studentCount];//동적객체 배열

	for (int i = 0; i < studentCount; i++) {
		cout << i + 1 << "번째 학생의 학년을 입력하시오 " << "\n";
		cin >> grade;

		cout << i + 1 << "번째 학생의 반을 입력하시오 " << "\n";
		cin >> classNum;

		parray[i].Init(grade, classNum);
	}

	for (int i = 0; i < studentCount; i++) {
		parray[i].info();
		cout << "\n";
	}

	delete[] parray; //동적변수 반환처리
					//동적메모리에 할당 받은 객체를 해제

	return 0;
}