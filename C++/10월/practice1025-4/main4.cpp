#include <iostream>
#include <string>

using namespace std;

class Computer {//스마트폰의 컴퓨터 기능
public:
	string _game;
	string _youtube;

	Computer(string game, string youtube):_game(game), _youtube(youtube){}

	
	void info() {
		
		cout << "실행중인 게임: ";//게임이름 입력
		cin >> _game;
		cout<<"현재 실행중인 게임은 "<<_game<<" 입니다." << "\n";
		cout << "현재 유튜브상태: ";//양호,나쁘지 않음,불량
		cin >> _youtube;
		cout << "\n";
	}
};

class Phone {//스마트폰의 전화기 기능
public:
	string _Call;
	int _Text;

	Phone(string call,int text)
		:_Call(call), _Text(text) {}

	
	void Texting(int text) {
		_Text = text;
	}

	void info() {
		cout << "\n";
		cout << "통화상태: ";//좋음, 나쁘지 않음, 불량
		cin >> _Call;
		cout << "\n";
		cout << "받은 메세지 갯수: ";
		cin >> _Text;
		cout << "\n";
	}
	
};

class SmartPhone : public Computer, public Phone {//현재 실행된 스마트폰 앱의 갯수
public:
	int _app;

	SmartPhone(string game, string youtube, string call, int text,int app)
		:Computer(game,youtube), Phone(call, text), _app(app){}

	void info() {
		cout << "★갤럭시 A50기종" << "\n"<<"\n";
		Computer::info();
		Phone::info();
		cout << "현재 실행 중인 앱의 갯수: ";
		cin >> _app;
	}
};

void func(SmartPhone* pvalue) {
	pvalue->info();
}

int main() {
	SmartPhone device("", "", "", 0, 0);
	//스마트폰 객체로 전화걸기/ 전화 받기, 게임하기, 메세지 보내기

	//과제
	//집에서 서로 이질적인 대상객체를 다중상속해서 객체를 생성하고
	//작동시켜 보세요.

	func(&device);

	return 0;
}