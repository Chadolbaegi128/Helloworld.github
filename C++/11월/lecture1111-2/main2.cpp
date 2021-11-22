#include <iostream>
#include <string>

using namespace std;

class Son {//캡슐화->'Son'이라는 클래스형 데이터 타입 생성
public:
	int birthday;//멤버변수
	string address;
	string name;
	string juminNum;

};

int main() {
	Son a;//클래스형 데이터 타입으로 만들어진 변수->객체(object)
	a.birthday = 19871111;// 인스턴스(instance)->객체를 실현한 상태
	a.address = "런던";// 인스턴스(instance)->객체를 실현한 상태
	a.name = "손흥민";// 인스턴스(instance)->객체를 실현한 상태
	a.juminNum = "12312312312312";// 인스턴스(instance)->객체를 실현한 상태

	cout << "생년월일: " << a.birthday << "\n";
	cout << "주소: " << a.address << "\n";
	cout << "이름: " << a.name << "\n";
	cout << "주민번호: " << a.juminNum << "\n";

	return 0;
}