#include <iostream>

using namespace std;


class Add {
public:
    int operator()(int a, int b) {   // functor(��ü�� �Լ�ó�� ���)
        return a + b;
    }

    float operator()(float a, float b) {
        return a + b;
    }
};

void func(Add& ref) {
    int a = 20;
    int b = 30;
    ref(a, b);
}


int main() {
    Add add;
    int a = 20;
    int b = 30;

    cout << a << " + " << b << " = " << add(a, b) << endl;
    add.operator()(a, b);

    return 0;
}