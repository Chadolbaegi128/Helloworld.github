#include <iostream>
using namespace std;

class Complex {
private:
    int _real;
    int _imaginary;

public:
    Complex(int real, int imaginary)
        : _real(real), _imaginary(imaginary) {}

    int Real() {
        return _real;
    }

    int Imaginary() {
        return _imaginary;
    }

    Complex operator+(Complex&p) {
       return Complex(_real + p._real, _imaginary + p._imaginary);
            
    }

    Complex operator-(Complex&p) {
       return Complex(_real - p._real, _imaginary - p._imaginary);
       
    }

    // ����, ���� ������ �����ε�

    void info() {
        cout << _real << showpos << _imaginary << "i" << endl;
        cout << noshowpos;
        cout << "\n";
    }

};



int main() {
    // Complex ��ü�� ���� ������ ������ �Ͽ� ���� ����غ�����.

    Complex a(10, -10);
    Complex b(20, -30);
    Complex c = a + b;
    Complex d = a - b;

    a.info();
    b.info();

    cout << "Complex Ŭ���� ���� ���: ";
    c.info();
    cout << "Complex Ŭ���� ���� ���: ";
    d.info();

    return 0;
}