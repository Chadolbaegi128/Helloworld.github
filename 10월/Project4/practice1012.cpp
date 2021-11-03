#include <iostream>
#include <string>

using namespace std;

class Tiger {
private:
    string _managecode; // 관리번호 // 멤버변수 객체의 속성
    int _sungbyul;   // 성별 0: 숫컷, 1: 암컷.
    int _age;   // 나이
    float _weight;   // 체중

public:
    Tiger() {   // 생성자(constructor), 기본 생성자
        cout << "기본 생성자" << endl;
        _managecode = "000000";
        _sungbyul = 0;
        _age = 0;
        _weight = 0;
    }

    Tiger(string managecode, int sungbyul, int age, float weight) {   // 인자를 받는 생성자
        cout << "인자를 받는 생성자" << endl;
        _managecode = managecode;
        _sungbyul = sungbyul;
        _age = age;
        _weight = weight;
    }

    Tiger(string managecode) {
        cout << "managecode만 받는 생성자" << endl;
        _managecode = managecode;
        _sungbyul = 0;
        _age = 0;
        _weight = 0;
    }

    void Eat() {   // 멤버함수 객체의 행동
        cout << "호랑이가 먹는다." << endl;
    }

    void SetManageCode(string value) {
        _managecode = value;
    }

    void info() {   // 멤버함수
        cout << "관리번호: " << _managecode << endl;
        cout << "성별: " << _sungbyul << endl;
        cout << "나이: " << _age << endl;
        cout << "체중: " << _weight << endl;
    }
};


int main() {
    Tiger tiger;   // 객체가 만들어질때 자동으로 호출 되어지는 함수
                // 생성자
    tiger.info();

    cout << endl;
    Tiger tiger2("1231", 1, 19, 200.5f);

    tiger2.info();


    cout << endl;
    Tiger tiger3("1234");

    tiger3.info();


    return 0;
}