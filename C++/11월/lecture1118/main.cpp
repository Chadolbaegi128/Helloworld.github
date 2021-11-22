#include <iostream>
#include <stdlib.h>

using namespace std;

class A {
private:
	int _value;
	int _value2;

public:
	A() :_value(0), _value2(0) {
		cout << "������" << "\n";
	}

	A(int value, int value2)
		:_value(value), _value2(value2) {
		cout << "������" << "\n";
	}

	~A() {
		cout << "�Ҹ���" << "\n";
	}

	void SetValue(int value) {
		_value = value;
	}

	void SetValue2(int value) {
		_value2 = value;
	}

	void info() {
		cout << "_value = " << _value << "\n";
		cout << "_value2 = " << _value2 << "\n";
	}
};

//C,C++
//malloc,calloc,realloc
//free

int main() {
	//new�����ڷ� ��ü�� �����Ҵ��Ҷ�
	//�⺻ �����ڸ� ȣ�����ش�.(���ڸ� �޴� �����ڷ� ȣ���� ��->A* pa=new A(10, 20);
	A* pa = new A;//������ü(new ������)

	//delete �����ڷ� ��ü�� �����Ҷ�
	//�Ҹ��ڸ� ȣ�����ش�.
	delete pa;//���� ��ü ����

	cout << "-------------------" << "\n";

	//malloc�� C���� �����޸𸮸� �Ҵ��Ҷ� ����Ѵ�.
	//malloc���� ��ü�� �����Ҵ��ϸ� �����ڸ� ȣ������ �ʽ��ϴ�.
	//malloc���� ��ü�� ���������ϸ� �ȵȴ�.
	A* pma = (A*)malloc(sizeof(A));//���� �޸� �Ҵ�
	// 
	//free�� malloc �Լ��� �Ҵ��� �����޸𸮸� ���� �� ����Ѵ�.
	//free�� ����ϸ� �����޸𸮸� ������Ų��.
		free(pma);// ����
	
		cout << "-------------" << "\n";

		int* paa = (int*)malloc(sizeof(int) * 10);

		for (int i = 0; i < 10; i++)
		{
			paa[i] = i;
		}

		for (int i = 0; i < 10; i++)
		{
			cout << "paa[" << i << "] = "<<paa[i] << "\n";
		}

		free(paa);

	return 0;
}