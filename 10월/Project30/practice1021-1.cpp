#include <iostream>
#include <string>

using namespace std;

//상속-특수화(speclialization) 예제-클래스를 분화, 재배열
class Animal {
protected:
	//int _type;//0: 소, 1: 돼지, 2: 닭, 3: 돌고래, 4: 독수리 etc
	string _name;
	float _height;//키
	float _weight;//체중
	bool _gender;//성별

public:
	Animal(): _name("동물"), _height(0.0f), _weight(0.0f), _gender(false){}
	Animal(string name, float height, float weight, bool gender):
	_name(name), _height(height), _weight(weight), _gender(gender){}



	void Speak() {
		cout << "동물농장" << "\n";
	}

	void Run() {
		cout << _name << "이 뛴다." << "\n";
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
	Cow(): Animal("소",180.0f, 200.0f,false){}
	Cow(string name, float height, float weight, bool gender):
		Animal(name,height,weight,gender){}

	void Speak() {
		cout << "음메" << "\n";
	}

	void info() {
		cout << "소" << "\n";
		Animal::info();
	}
};

class Pig : public Animal {
public:
	Pig(): Animal("돼지", 100.0f, 150.0f, false){}
	Pig(string name, float height, float weight, bool gender):
		Animal(name,height,weight,gender){}

	void Speak() {
		cout << "꿀꿀" << "\n";
	}

	void info() {
		cout << "돼지" << "\n";
		Animal::info();
	}
};

class Chicken : public Animal {
public:
	Chicken():Animal("닭", 30.0f, 3.0f, false){}
	Chicken(string name, float height, float weight, bool gender) :
		Animal(name, height, weight, gender){}

	void Speak() {
		cout << "꼬끼오" << "\n";
	}

	void info() {
		cout << "닭" << "\n";
		Animal::info();
	}
};

class Dolphin : public Animal {
private:
	float _swimtime; //잠수시간

public:
	Dolphin(): Animal("돌고래", 170.0f, 100.0f, false), _swimtime(10.0f){}
	Dolphin(string name, float height, float weight, bool gender, float swimtime)
		:Animal(name, height, weight, gender), _swimtime(swimtime) {}

	void Speak() {
		cout << "끽끽" << "\n";
	}

	void Swim() {
		cout << _name << "이 수영한다." << "\n";
	}

	void info() {
		cout << "돌고래" << "\n";
		Animal::info();
		cout << "잠수시간: " << _swimtime << "\n";
	}

};

class Eagle :public Animal {
private:
	float _flytime;//비행시간

public:
	Eagle() : Animal("독수리", 180.0f, 200.0f, false), _flytime(2.0f){}
	Eagle(string name, float height, float weight, bool gender, float flytime):
		Animal(name, height, weight, gender), _flytime(flytime) {}

	void Speak() {
		cout << "끼오" << "\n";
	}

	void fly() {
		cout << _name << "가 난다." << "\n";
	}

	void info() {
		cout << "독수리" << "\n";
		Animal::info();
		cout << "비행시간: " << _flytime << "\n";
	}
};

int main() {

	Cow cow("소", 160.0f, 200.0f, true);
	cow.Speak();
	cow.Run();
	cow.info();
	
	cout << "\n";
	Pig pig("돼지", 100.0f, 150.0f, true);
	pig.Speak();
	pig.Run();
	pig.info();
	

	cout << "\n";
	Chicken chicken("닭", 30.0f, 3.0f, false);
	chicken.Speak();
	chicken.Run();
	chicken.info();

	cout << "\n";
	Dolphin dolphin("돌고래", 200.0f, 200.0f, false);
	dolphin.Speak();
	dolphin.Swim();
	dolphin.info();

	cout << "\n";
	Eagle eagle("독수리", 40.0f, 15.1f, true);
	eagle.Speak();
	eagle.fly();
	eagle.info();

	return 0;
}