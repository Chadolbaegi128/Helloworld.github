#include <iostream>

using namespace std;

class Student {
private:
	int _age; //나이
	int _grade; //학년
	int _classNum; //반번호
	string _name; //이름

public:
	//인자를 받는 생성자
	//기본생성자 만들어서 값을 초기화시키고
	//내부에 info함수를 만들어서 출력해보세요.

	Student(int age, int grade, int classNum, string name) :
		_age(age), _grade(grade), _classNum(classNum), _name(name) //멤버 초기화 리스트를 통해 멤버 변수를 직접 초기화 할 수 있다.
	{
	//생성자 초기화 리스트를 사용할 경우 여기에 값을 할당할 필요가 없다.
	}

	void info() {
		cout << "객체 Student 1의 나이: " << _age << endl;
		cout << "객체 Student 1의 학년: " << _grade << endl;
		cout << "객체 Student 1의 반번호: " << _classNum << endl;
		cout << "객체 Student 1의 이름: " << _name << endl;

	}

	//생성자에 인자를 넣게 되면 별도로 멤버 함수를 넣지 않아도 된다.
	
};

int main() {
	Student student(17,1,12,"홍길동");
	
	student.info();
}