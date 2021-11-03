#include <iostream>
#include <string>

using namespace std;

class Tiger {
private:
	string _managecode; //������ȣ, ������� ��ü�� �Ӽ�
	int _sungbyul; //����
	int _age; //����
	float _weight; //ü��


public://��������� ö���� ���߰�(private, protected)
	//�Լ��� ���� �����ϵ��� �ض�.

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

	void Setmanagecode(string value) {
		_managecode = value;
	}


	void Setgender(int value) {
		if (value == 0) {
			cout << "����" << endl;
			return;
		}
		else if (value == 1) {
			cout << "����" << endl;
			return;
		}
		else {
			value=0;
		}
	}

	int _Getgender() {
		return _sungbyul;
	}

	void Setage(int value) {
		_age = value;
	}

	void Setweight(float value) {
		if (value > 150) {
			_weight = 150;
		}
		else if (value < 300) {
			_weight = 300;
		}
		else {
			_weight = value;
		}
	}

	float Getweight() {
		return _weight;
	}
};

int main() {
	Tiger tiger;

	tiger.Eat();
	tiger.info();

	tiger.Setmanagecode("324522134");
	tiger.Setgender(1);
	tiger.Setage(30);
	tiger.Setweight(160.5);



	return 0;
}