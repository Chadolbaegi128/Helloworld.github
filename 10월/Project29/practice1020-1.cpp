#include <iostream>
#include <string>

using namespace std;

//소, 돼지. 닭//대상객체
//동물농장
//육성시뮬레이션

class Cow {
private:
	string _name; //이름
	float _weight; //몸무게
	float _height; //키
	float _age; //나이
	bool _sungbyul;//수컷: true, 암컷: false

public:
	Cow()
		:_name(""), _weight(0.0f), _height(0.0f), _age(0.0f), _sungbyul(false)
	{}//생성자 초기화

	Cow(string name, float weight, float height, float age, bool sungbyul)
		:_name(name), _weight(weight), _height(height), _age(age), _sungbyul(sungbyul)
	{}//인자가 있는 생성자 작성

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

	//행동
	void Speak() {
		cout << "음메!" << "\n";
	}

	void Run() {
		cout << "뛴다" << "\n";
	}

	void info() {
		cout << "이름: " << _name << "\n";
		cout << "체중: " << _weight << "\n";
		cout << "키: " << _height << "\n";
		cout << "나이: " << _age << "\n";
	}

};

class Pig {//각각의 클래스에 멤버변수를 달리 적용할 수 있다.
private: //각 동물들의 특징을 통해 멤버변수를 설정할 수 있다.
	string _name;
	float _weight;
	float _height;
	float _age;
	bool _sungbyul;
	int _grade;

public:
	Pig():_name("돼지"),_weight(0.0f), _height(0.0f), _age(0.0f), _sungbyul(false), _grade(0)
	{}

	Pig(string name, float weight, float height, float age, bool sungbyul, int grade)
		:_name(name), _weight(weight), _height(height), _age(age), _sungbyul(sungbyul), _grade(grade){}


	//Set,Get함수-private로 숨겨진 멤버변수에 접근할 수 있는 방법
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

	//행동
	void Speak() {
		cout << "꿀꿀" << "\n";
	}

	void Run() {
		cout << "뛴다" << "\n";
	}

	float CheckGrade() {
		return _weight / 2 * _height;
	}

	void info() {
		cout << "이름: " << _name << "\n";
		cout << "체중: " << _weight << "\n";
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
		_name("닭"), _weight(0.0f), _height(0.0f), _age(0.0f), _sungbyul(false){}

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

	//행동
	void Speak() {
		cout << "꼬끼오" << "\n";
	}

	void Run() {
		cout << "뛴다" << "\n";
	}

	void info() {
		cout << "이름: " << _name << "\n";
		cout << "체중: " << _weight << "\n";
	}
};

int main() {
	Pig pig("돼지", 100.0f, 1.3f, 2.5f, true, 0);

	pig.Speak();
	pig.Run();

	pig.info();

	cout << "\n";
	Cow cow("소", 150.0f, 1.8f, 3.0f, false);
	cow.Speak();
	cow.Run();

	cow.info();

	cout << "\n";
	Chicken chicken("닭", 2.0f, 0.3f, 0.5f, false);

	chicken.Speak();
	chicken.Run();
	chicken.info();
	return 0;
}