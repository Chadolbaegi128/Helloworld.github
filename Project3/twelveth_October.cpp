#include <iostream>
#include <string>

using namespace std;

class Tiger {
private:
	string _managecode; //������ȣ, ������� ��ü�� �Ӽ�
	int _sungbyul; //���� 0: ����, 1: ����.
	int _age; //����
	float _weight; //ü��


public://��������� ö���� ���߰�(private, protected)
	//�Լ��� ���� �����ϵ��� �ض�.

	Tiger() {
		_managecode = "000000";
		_sungbyul = 0;
		_age = 0;
		_weight = 0;
	}

	Tiger(string managecode, int sungbyul, int age, float weight) {
		cout << "���ڸ� �޴� ������" << endl;
		_managecode =managecode;
		_sungbyul = sungbyul;
		_age = age;
		_weight = weight;
	}

	Tiger(string managecode)
		: _managecode(managecode), _sungbyul(0), _age(0), _weight(0)
	{
		cout << "managecode�� �޴� ������" << endl;

	}

	void Eat() {//����Լ� ��ü�� �ൿ
		cout << "ȣ���̰� ��⸦ �Դ´�." << endl;
	}


	void info()
	{//����Լ�
		cout << "��ü tiger�� ������ȣ: " << _managecode << endl;
		cout << "��ü tiger�� ����: " << _sungbyul << endl;
		cout << "��ü tiger�� ����: " << _age << endl;
		cout << "��ü tiger�� ü��: " << _weight << "kg" << endl;

	}

	void managecode(string value) {
		_managecode = value;
	}

	

	void age(int value) {
		_age = value;
	}

	void weight(float value) {
		if (value < 150) {
			_weight = 150;
		}
		else if (value > 300) {
			_weight = 300;
		}
		else {
			_weight = value;
		}
	}

	
};

int main() {
	Tiger tiger;
	
	tiger.Eat();
	tiger.info();

	cout << endl;

	Tiger tiger2("3422", 1, 19, 140.5f);

	tiger2.Eat();
	tiger2.info();
	
	cout << endl;

	Tiger tiger3("3333");

	tiger3.info();
	
	

	return 0;
}