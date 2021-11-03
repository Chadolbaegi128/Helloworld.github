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
		cout << "����� �������Դϴ�." << "\n";
	}

	~Computer() {
		count--;
		cout << "����� �Ҹ����Դϴ�." << "\n";
	}

	void info() {
		cout << "����� ��ǻ�͸� �����Դϴ�." << "\n";
		cout << "\n";
		cout << "�𵨸�: " << modelName << "\n";
		cout << "��������: " << productDay << "\n";
		cout << "���걹��: " << productCountry << "\n";
	}

	static int count;
};

int Computer::count = 1;

int main() {
	Computer model1("�Ｚ", 20171103, "�̱�");
	model1.count = 2000;
	cout << "\n";
	model1.info();
	cout << "������: " << model1.count << "\n";
	cout << "\n";

	{Computer model2("LG", 20181111, "�ε�");
	model2.count = 1500;
	cout << "\n";
	model2.info();
	cout << "������: " << model2.count << "\n"; }
	cout << "\n";

}