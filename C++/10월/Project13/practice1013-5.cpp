#include <iostream>
#include <string>

using namespace std;

class Computer {
private:
	string modelName;
	int productDay;
	string productCountry;
	

public:
	Computer(string modelname, int productday, string productcountry):
		modelName(modelname), productDay(productday), productCountry(productcountry)
	{
		count++;
		cout << "여기는 생성자입니다." << "\n";
	}

	~Computer() {
		count--;
		cout << "여기는 소멸자입니다." << "\n";
	}

	void info() {
		cout << "여기는 컴퓨터모델 정보입니다." << "\n";
		cout << "\n";
		cout << "모델명: " << modelName << "\n";
		cout << "생산일자: " << productDay << "\n";
		cout << "생산국가: " << productCountry << "\n";
	}

	static int count;
};

int Computer::count = 1;

int main() {
	Computer model1("삼성", 20171103, "미국");
	model1.count = 2000;
	cout << "\n";
	model1.info();
	cout << "생산대수: " << model1.count << "\n";
	cout << "\n";

	{Computer model2("LG", 20181111, "인도");
	model2.count = 1500;
	cout << "\n";
	model2.info();
	cout << "생산대수: " << model2.count << "\n"; }
	cout << "\n";

}