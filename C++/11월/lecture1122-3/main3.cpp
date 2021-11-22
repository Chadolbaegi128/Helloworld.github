#include <iostream>
#include <string>

using namespace std;

// �������� �ùķ��̼�
// ���� 3������ Ŭ���� ���弼��...

//����, ��, ��


class Animal {
protected:
	string _name;
	float _age;
	float _weight;
	float _height;
	bool _gender;//true: ����, false: ����

public:
	Animal(string name, float age, float weight, float height, bool gender)
		:_name(name), _age(age), _weight(weight), _height(height), _gender(gender)
	{}

	void Speak() {
		cout << _name << "�� ���Ѵ�." << "\n";
	}

	void Walk() {
		cout << _name << "�� �ȴ´�." << "\n";
	}

	bool GetGender() {
		switch (_gender) {
		case true:
			cout << "����: ����" << "\n";
			break;

		case false:
			cout << "����: ����" << "\n";
			break;
		}

		return _gender;
	}

	void info() {
		cout << "�̸�: " << _name << "\n";
		cout << "ü��: " << _weight << "\n";
	}
};

//����, ��, ��, ��
class Pig:public Animal {
public:
	Pig(string name, float age, float weight, float height, bool gender)
		:Animal(name, age, weight, height, gender){}


};

class Cow:public Animal {
private:
	int _type; //����, �Ϲݼ�
	

public:
	Cow(string name, float age, float weight, float height, int type, bool gender)
		:Animal(name, age, weight, height, gender), _type(type){}
	

	int GetType() {
		switch (_type) {
		case 0:
			cout <<"ǰ��: ����" << "\n";
			break;

		case 1:
			cout <<"����: �Ϲݼ�" << "\n";
		}

		return _type;
	}
		
};

class Chicken:public Animal {
private:
	bool _isFly;

public:
	Chicken(string name, float age,float weight, float height, bool gender, bool isFly)
		:Animal(name, age, weight, height, gender), _isFly(isFly){}


	bool GetFly() {
		switch (_isFly) {
		case true:
			cout << "���� �ִ� ��" << "\n";

		case false:
			cout << "������ ��" << "\n";
		}

		return _isFly;
	}
			
};

class Sheep :public Animal {
public:
	Sheep(string name, float age, float weight, float height, bool gender)
		:Animal(name, age, weight, height, gender){}
};

int main() {

	Pig pig("�ܲ���", 3, 1000, 1, true);
	pig.info();
	pig.GetGender();
	pig.Speak();
	pig.Walk();
	cout << "\n";

	Cow cow("�ٸ���", 2.5f, 3000, 2.5f, 1, false);
	cow.info();
	cow.GetGender();
	cow.Speak();
	cow.Walk();
	cout << "\n";

	Chicken chicken("ġŲ",3, 700, 50, false, true);
	chicken.info();
	chicken.GetGender();
	chicken.GetFly();
	cout << "\n";

	Sheep sheep("�絹��", 1.5f, 2000, 1.1f, false);
	sheep.info();
	sheep.GetGender();
	sheep.Walk();
	cout << "\n";

	return 0;
}