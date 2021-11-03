#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

class Refrigerator {
private:
	string modelName;
	string productDay;
	int size;//�Ϲ� ��� ����

public:
	//���ڸ� �޴� �����ڸ� ����ð�
	//info�Լ��� �Ϲݸ�������� ������������� ���� ����غ�����.

	static int count; //���� ��� ������ ��ü�� ����
					  //���� �ʽ��ϴ�.
					  //Ŭ������ ���� �ֽ��ϴ�.

	
	Refrigerator() :modelName("0"), productDay("0"), size(0) {
		cout << "������" << "\n";
		count++;
	}

	~Refrigerator() {
		cout << "�Ҹ���" << "\n";
		count--;
	}

	void info(string name) {
		cout << name << "modelName = " << modelName << "\n";
		cout << name << "productDay = " << productDay << "\n";
		cout << name << "size = " << size << "\n";
	}

	static void printCount() { //��������Լ�
		cout << "���� Refrigerator ��ü�� ������ " << count << "\n";
	}



};

//::��������������(scope������)
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