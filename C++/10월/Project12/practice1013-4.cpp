#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

class Refrigerator {
private:
	string modelName;
	string productDay;
	int size;//일반 멤버 변수

public:
	//인자를 받는 생성자를 만드시고
	//info함수로 일반멤버변수와 정적멤버변수의 값을 출력해보세요.

	static int count; //정적 멤버 변수는 객체에 속해
					  //있지 않습니다.
					  //클래스에 속해 있습니다.

	
	Refrigerator() :modelName("0"), productDay("0"), size(0) {
		cout << "생성자" << "\n";
		count++;
	}

	~Refrigerator() {
		cout << "소멸자" << "\n";
		count--;
	}

	void info(string name) {
		cout << name << "modelName = " << modelName << "\n";
		cout << name << "productDay = " << productDay << "\n";
		cout << name << "size = " << size << "\n";
	}

	static void printCount() { //정적멤버함수
		cout << "현재 Refrigerator 객체의 갯수는 " << count << "\n";
	}



};

//::범위지정연산자(scope연산자)
int Refrigerator::count = 0;

int main() {
	{
		Refrigerator machine; 
		Refrigerator::printCount();
		cout << "\n";


		{Refrigerator machine2;
		Refrigerator::printCount(); }
		cout << "\n";

		Refrigerator::printCount();
		cout << "\n";

		Refrigerator machine3;
		Refrigerator::printCount();
		cout << "\n";
	}
	cout << "\n";
	Refrigerator::printCount();

	return 0;
}