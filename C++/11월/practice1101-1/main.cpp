#include <iostream>

using namespace std;

class A {
public:
    virtual void info() { // 가상함수, 가상함수테이블
        cout << "A class info()" << endl;
    }

    virtual void print() {   // 가상함수
        cout << "A class print()" << endl;
    }

    void generalFunction() {   // 일반함수
        cout << "A class generalFunction()" << endl;
    }
};


class B : public A {
public:
    void info() override { // 가상함수
        cout << "B class info()" << endl;
    }

    void generalFunction() {   // 일반함수
        cout << "B class generalFunction()" << endl;
    }

};


class C : public A {
public:
    void print() override {   // 가상함수
        cout << "C class print()" << endl;
    }

    void generalFunction() {   // 일반함수
        cout << "C class generalFunction()" << endl;
    }

};

void funcInfo(A& ref) {
    ref.info();   // 가상함수 동적바인딩: 바인딩을 유보, 컴파일 할 때는 결정이 안됨
    // ref._vfptr[0]();->0번대에

}

void funcGeneralFunction(A& ref) {
    ref.generalFunction();   // 일반함수 정적바인딩
    // ref.A::generalFunction();
}

int main() {

    A a;
    B b;
    C c;



}