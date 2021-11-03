#include <iostream>
#include <string>

using namespace std;

//���-Ư��ȭ(speclialization) ����-Ŭ������ ��ȭ, ��迭
class Animal {
protected:
	//int _type;//0: ��, 1: ����, 2: ��, 3: ����, 4: ������ etc
	string _name;
	float _height;//Ű
	float _weight;//ü��
	bool _gender;//����

public:
	Animal(): _name("����"), _height(0.0f), _weight(0.0f), _gender(false){}
	Animal(string name, float height, float weight, bool gender):
	_name(name), _height(height), _weight(weight), _gender(gender){}



	void Speak() {
		cout << "��������" << "\n";
	}

	void Run() {
		cout << _name << "�� �ڴ�." << "\n";
	}

	void info() {
		cout << "name: " << _name << "\n";
		cout << "height: " << _height <<"cm"<< "\n";
		cout << "weight: " << _weight << "kg" << "\n";
		cout << "gender: " << _gender << "\n";
	}
};

class Cow :public Animal {
public:
	Cow(): Animal("��",180.0f, 200.0f,false){}
	Cow(string name, float height, float weight, bool gender):
		Animal(name,height,weight,gender){}

	void Speak() {
		cout << "����" << "\n";
	}

	void info() {
		cout << "��" << "\n";
		Animal::info();
	}
};

class Pig : public Animal {
public:
	Pig(): Animal("����", 100.0f, 150.0f, false){}
	Pig(string name, float height, float weight, bool gender):
		Animal(name,height,weight,gender){}

	void Speak() {
		cout << "�ܲ�" << "\n";
	}

	void info() {
		cout << "����" << "\n";
		Animal::info();
	}
};

class Chicken : public Animal {
public:
	Chicken():Animal("��", 30.0f, 3.0f, false){}
	Chicken(string name, float height, float weight, bool gender) :
		Animal(name, height, weight, gender){}

	void Speak() {
		cout << "������" << "\n";
	}

	void info() {
		cout << "��" << "\n";
		Animal::info();
	}
};

class Dolphin : public Animal {
private:
	float _swimtime; //����ð�

public:
	Dolphin(): Animal("����", 170.0f, 100.0f, false), _swimtime(10.0f){}
	Dolphin(string name, float height, float weight, bool gender, float swimtime)
		:Animal(name, height, weight, gender), _swimtime(swimtime) {}

	void Speak() {
		cout << "����" << "\n";
	}

	void Swim() {
		cout << _name << "�� �����Ѵ�." << "\n";
	}

	void info() {
		cout << "����" << "\n";
		Animal::info();
		cout << "����ð�: " << _swimtime << "\n";
	}

};

class Eagle :public Animal {
private:
	float _flytime;//����ð�

public:
	Eagle() : Animal("������", 180.0f, 200.0f, false), _flytime(2.0f){}
	Eagle(string name, float height, float weight, bool gender, float flytime):
		Animal(name, height, weight, gender), _flytime(flytime) {}

	void Speak() {
		cout << "����" << "\n";
	}

	void fly() {
		cout << _name << "�� ����." << "\n";
	}

	void info() {
		cout << "������" << "\n";
		Animal::info();
		cout << "����ð�: " << _flytime << "\n";
	}
};

int main() {

	Cow cow("��", 160.0f, 200.0f, true);
	cow.Speak();
	cow.Run();
	cow.info();
	
	cout << "\n";
	Pig pig("����", 100.0f, 150.0f, true);
	pig.Speak();
	pig.Run();
	pig.info();
	

	cout << "\n";
	Chicken chicken("��", 30.0f, 3.0f, false);
	chicken.Speak();
	chicken.Run();
	chicken.info();

	cout << "\n";
	Dolphin dolphin("����", 200.0f, 200.0f, false);
	dolphin.Speak();
	dolphin.Swim();
	dolphin.info();

	cout << "\n";
	Eagle eagle("������", 40.0f, 15.1f, true);
	eagle.Speak();
	eagle.fly();
	eagle.info();

	return 0;
}