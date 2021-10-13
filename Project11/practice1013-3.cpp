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

	static void printCount() {
		cout << "���� Refrigerator ��ü�� ������ " << count << endl;
	}

	Refrigerator(string a, string b, int c):modelName(a), productDay(b), size(c){
		cout << "�� �̸�" << endl;
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

//::��������������(scope������)
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