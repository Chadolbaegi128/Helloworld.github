#include <iostream>
#include <string>

using namespace std;

class Son {// 캡슐화->데이터 타입을 생성('Son'이라는 이름을 가진 클래스형 데이터 타입)
private://외부에 공개되지 않는 부분을 정의=>Set,Get 함수를 통해서만 접근 가능(권고 사항)
	int birthday;//멤버변수, 객체의 속성이라고도 한다(attribute, property)
	string address;
	string name;
	string juminNum;

public:
	//Set,Get 함수->private 영역에 있는 멤버변수를 외부에서 사용하기 위해 쓰이는 함수
	//의무적으로 사용되는 것은 아니나, 오류 발생을 최소화하기 위해 사용됨
	void SetBirthday(int value) {
		if (value > 100) {
			birthday = 100;
		}
		else if (value < 0) {
			birthday = 0;
		}
		else {
			birthday = value;
		}
	}

	int GetBirthday() {
		return birthday;
	}

	void SetAddress(string value) {
		address = value;
	}

	string GetAddress() {
		return address;
	}

	void SetName(string value){
		name = value;
	}

	string GetName() {
		return name;
	}

	void SetjuminNum(string value) {
		juminNum = value;
	}

	string GetjuminNum() {
		return juminNum;
	}
};

int main() {
	Son a;
	Son b;
	Son c;

	a.SetBirthday(20);
	cout << a.GetBirthday() << "\n";

	a.SetAddress("런던");
	cout << a.GetAddress() << "\n";

	a.SetName("손흥민");
	cout << a.GetName() << "\n";

	a.SetjuminNum("12312312312");
	cout << a.GetjuminNum() << "\n";


	return 0;
}