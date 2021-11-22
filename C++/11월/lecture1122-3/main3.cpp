#include <iostream>
#include <string>

using namespace std;

// 동물농장 시뮬레이션
// 동물 3종류의 클래스 만드세요...

//돼지, 소, 닭


class Animal {
protected:
	string _name;
	float _age;
	float _weight;
	float _height;
	bool _gender;//true: 수컷, false: 암컷

public:
	Animal(string name, float age, float weight, float height, bool gender)
		:_name(name), _age(age), _weight(weight), _height(height), _gender(gender)
	{}

	void Speak() {
		cout << _name << "가 말한다." << "\n";
	}

	void Walk() {
		cout << _name << "가 걷는다." << "\n";
	}

	bool GetGender() {
		switch (_gender) {
		case true:
			cout << "성별: 수컷" << "\n";
			break;

		case false:
			cout << "성별: 암컷" << "\n";
			break;
		}

		return _gender;
	}

	void info() {
		cout << "이름: " << _name << "\n";
		cout << "체중: " << _weight << "\n";
	}
};

//돼지, 소, 닭, 양
class Pig:public Animal {
public:
	Pig(string name, float age, float weight, float height, bool gender)
		:Animal(name, age, weight, height, gender){}


};

class Cow:public Animal {
private:
	int _type; //얼룩소, 일반소
	

public:
	Cow(string name, float age, float weight, float height, int type, bool gender)
		:Animal(name, age, weight, height, gender), _type(type){}
	

	int GetType() {
		switch (_type) {
		case 0:
			cout <<"품종: 얼룩소" << "\n";
			break;

		case 1:
			cout <<"폼종: 일반소" << "\n";
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
			cout << "날수 있는 닭" << "\n";

		case false:
			cout << "못나는 닭" << "\n";
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

	Pig pig("꿀꿀이", 3, 1000, 1, true);
	pig.info();
	pig.GetGender();
	pig.Speak();
	pig.Walk();
	cout << "\n";

	Cow cow("근면이", 2.5f, 3000, 2.5f, 1, false);
	cow.info();
	cow.GetGender();
	cow.Speak();
	cow.Walk();
	cout << "\n";

	Chicken chicken("치킨",3, 700, 50, false, true);
	chicken.info();
	chicken.GetGender();
	chicken.GetFly();
	cout << "\n";

	Sheep sheep("양돌이", 1.5f, 2000, 1.1f, false);
	sheep.info();
	sheep.GetGender();
	sheep.Walk();
	cout << "\n";

	return 0;
}