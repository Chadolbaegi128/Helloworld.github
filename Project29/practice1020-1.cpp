#include <iostream>
#include <string>

using namespace std;

//��, ����. ��//���ü
//��������
//�����ùķ��̼�

class Cow {
private:
	string _name; //�̸�
	float _weight; //������
	float _height; //Ű
	float _age; //����
	bool _sungbyul;//����: true, ����: false

public:
	Cow()
		:_name(""), _weight(0.0f), _height(0.0f), _age(0.0f), _sungbyul(false)
	{}//������ �ʱ�ȭ

	Cow(string name, float weight, float height, float age, bool sungbyul)
		:_name(name), _weight(weight), _height(height), _age(age), _sungbyul(sungbyul)
	{}//���ڰ� �ִ� ������ �ۼ�

	void SetWeight(float value) {
		_weight = value;
	}

	float GetWeight() {
		return _weight;
	}

	void SetHeight(float value) {
		_height = value;
	}

	float GetHeight() {
		return _height;
	}

	float GetAge() {
		return _age;
	}

	//�ൿ
	void Speak() {
		cout << "����!" << "\n";
	}

	void Run() {
		cout << "�ڴ�" << "\n";
	}

	void info() {
		cout << "�̸�: " << _name << "\n";
		cout << "ü��: " << _weight << "\n";
		cout << "Ű: " << _height << "\n";
		cout << "����: " << _age << "\n";
	}

};

class Pig {//������ Ŭ������ ��������� �޸� ������ �� �ִ�.
private: //�� �������� Ư¡�� ���� ��������� ������ �� �ִ�.
	string _name;
	float _weight;
	float _height;
	float _age;
	bool _sungbyul;
	int _grade;

public:
	Pig():_name("����"),_weight(0.0f), _height(0.0f), _age(0.0f), _sungbyul(false), _grade(0)
	{}

	Pig(string name, float weight, float height, float age, bool sungbyul, int grade)
		:_name(name), _weight(weight), _height(height), _age(age), _sungbyul(sungbyul), _grade(grade){}


	//Set,Get�Լ�-private�� ������ ��������� ������ �� �ִ� ���
	void SetGrade(int value) {
		_grade = value;
	}

	int GetGrade() {
		return _grade;
	}

	void SetWeight(float value) {
		_weight = value;
	}

	float GetWeight() {
		return _weight;
	}

	float GetHeight() {
		return _height;
	}

	void SetAge(float value) {
		_age = value;
	}

	float GetAge() {
		return _age;
	}

	//�ൿ
	void Speak() {
		cout << "�ܲ�" << "\n";
	}

	void Run() {
		cout << "�ڴ�" << "\n";
	}

	float CheckGrade() {
		return _weight / 2 * _height;
	}

	void info() {
		cout << "�̸�: " << _name << "\n";
		cout << "ü��: " << _weight << "\n";
	}

};

class Chicken {
private:
	string _name;
	float _weight;
	float _height;
	float _age;
	bool _sungbyul;

public:
	Chicken():
		_name("��"), _weight(0.0f), _height(0.0f), _age(0.0f), _sungbyul(false){}

	Chicken(string name, float weight, float height, float age, bool sungbyul):
		_name(name), _weight(weight), _height(height), _age(age), _sungbyul(sungbyul){}

	void SetWeight(float value) {
		_weight = value;
	}

	float GetWeight() {
		return _weight;
	}

	void SetHeight(float value) {
		_height = value;
	}

	float GetHeight() {
		return _height;
	}

	void SetAge(float value) {
		_age = value;
	}

	float GetAge() {
		return _age;
	}

	//�ൿ
	void Speak() {
		cout << "������" << "\n";
	}

	void Run() {
		cout << "�ڴ�" << "\n";
	}

	void info() {
		cout << "�̸�: " << _name << "\n";
		cout << "ü��: " << _weight << "\n";
	}
};

int main() {
	Pig pig("����", 100.0f, 1.3f, 2.5f, true, 0);

	pig.Speak();
	pig.Run();

	pig.info();

	cout << "\n";
	Cow cow("��", 150.0f, 1.8f, 3.0f, false);
	cow.Speak();
	cow.Run();

	cow.info();

	cout << "\n";
	Chicken chicken("��", 2.0f, 0.3f, 0.5f, false);

	chicken.Speak();
	chicken.Run();
	chicken.info();
	return 0;
}