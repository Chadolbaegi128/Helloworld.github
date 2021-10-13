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

	static void printCount() {
		cout << "현재 Refrigerator 객체의 갯수는 " << count << endl;
	}

	Refrigerator(string a, string b, int c):modelName(a), productDay(b), size(c){
		cout << "모델 이름" << endl;
		count++;
	}

	~Refrigerator() {
		count--;
	}

	void info(string name) {
		cout<<name << "modelName = " << modelName << endl;
		cout<<name << "productDay = " << productDay << endl;
		cout<<name << "size = " << size << endl;
	}
	
	


	void SetmodelName(string a) {
		modelName = a;
	}

	void SetproductDay(string b) {
		productDay = b;
	}

	void SetSize(int c) {
		size = c;
	}

};

//::범위지정연산자(scope연산자)
int Refrigerator::count = 0;

int main() {
	Refrigerator machine("343434","2019/12/17",180);

	machine.count = 100;
	machine.info("machine ");

	cout << "machine count = " << machine.count << endl;
	cout << endl;

	Refrigerator machine2("213451","2018/02/13", 180);
	
	machine2.count = 300;
	machine2.info("machine2 ");
	 
	cout << "machine2 count = " << machine2.count << endl;
	cout << endl;

	Refrigerator::count = 20000;
	cout << "machine.count = " << machine.count << endl;
	cout << "machine2.count = " << machine2.count << endl;

	return 0;
}