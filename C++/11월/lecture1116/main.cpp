#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	int _Grade;//학년, 일반멤버변수
	int _classNum;//반
	string _Name;//학생 이름

public:
	static int Count; //정적멤버변수, 객체가 아닌 클래스에 속한다.
	//여러 객체가 생성되면 클래스의 정적멤버변수 하나를 공유하게 된다.
	//정적멤버변수, 정적멤버함수는 여러개 생성이 가능하지만
	//일반멤버변수,일반멤버함수처럼 각 객체에 복사가 되는 것은 아니다.

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
		cout << "학년: " << _Grade << "\n";
		cout << "반: " << _classNum << "\n";
		cout << "이름: " << _Name << "\n";
		cout << "현재 학생의 수: " << Count<<"\n" << "\n";
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

	cout << "현재 학생 수는: " << Student::Count << "\n";//Scope(범위지정) 연산자

	return 0;
}