#include <iostream>

using namespace std;

class A {
public:
    virtual void info() { // �����Լ�, �����Լ����̺�
        cout << "A class info()" << endl;
    }

    virtual void print() {   // �����Լ�
        cout << "A class print()" << endl;
    }

    void generalFunction() {   // �Ϲ��Լ�
        cout << "A class generalFunction()" << endl;
    }
};


class B : public A {
public:
    void info() override { // �����Լ�
        cout << "B class info()" << endl;
    }

    void generalFunction() {   // �Ϲ��Լ�
        cout << "B class generalFunction()" << endl;
    }

};


class C : public A {
public:
    void print() override {   // �����Լ�
        cout << "C class print()" << endl;
    }

    void generalFunction() {   // �Ϲ��Լ�
        cout << "C class generalFunction()" << endl;
    }

};

void funcInfo(A& ref) {
    ref.info();   // �����Լ� �������ε�: ���ε��� ����, ������ �� ���� ������ �ȵ�
    // ref._vfptr[0]();->0���뿡

}

void funcGeneralFunction(A& ref) {
    ref.generalFunction();   // �Ϲ��Լ� �������ε�
    // ref.A::generalFunction();
}

int main() {

    A a;
    B b;
    C c;



}