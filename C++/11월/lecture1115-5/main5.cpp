#include <iostream>

using namespace std;

class Monster {
private:   // 접근제어자
    int _health;   // 생명력 (멤버변수) 객체의 속성(attribute, property)
    int _attack;   // 공격력 (멤버변수)
    int _defense;   // 방어력 (멤버변수)

    int& _ref;   // 참조형 멤버가 있는경우
    const int MAX;// const type의 멤버가 있는 경우
    //참조형 멤버나 const type의 변수는 생성자 초기화 리스트
    //로 처리를 하지 않으면 오류가 발생한다.

public:
    Monster()
        :_ref(_health), MAX(100)
    {   // 생성자 (기본생성자)

    }

    // 생성자(인자를 받는 생성자)
    Monster(int health, int attack, int defense, int& ref, int max)
        : _health(health), _attack(attack), _defense(defense), _ref(ref), MAX(max)
    {
        //참조형 변수, 상수형 변수('const'+자료형)는 중괄호가 아닌
        //생성자 초기화 리스트로 작성해야 한다.
    }

    ~Monster() {   // 소멸자

    }

    void Attack() {   // 멤버함수 , 객체의 행동(action, behaviour)
        cout << "공격" << endl;
    }

    void Run() {   // 멤버함수
        cout << "뛴다" << endl;
    }

    void info() {   // 멤버함수
        cout << "health: " << _health << endl;
        cout << "attack: " << _attack << endl;
        cout << "defense: " << _defense << endl;
        cout << "ref: " << _ref << endl;
        cout << "MAX: " << MAX << endl;
    }
};

int main() {
    int a = 200;

    Monster m(10, 20, 30, a, 200);//인자를 받은 생성자 작동

    m.info();

    const int MAX = 200;//값을 변경할 수 없는 변수
    //상수성을 띤다.

    return 0;
}
