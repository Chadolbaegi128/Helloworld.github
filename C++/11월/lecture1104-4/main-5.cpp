#include <iostream>

using namespace std;

class DynamicArray {

};

// ���Ҽ�
class Complex {
private:
    int _real;
    int _imaginary;

public:
    Complex(int real, int imaginary)
        : _real(real), _imaginary(imaginary) {}

    int Real(int real) {
        _real = real;

        return _real;
    }

    int Imaginary(int imaginary) {
        _imaginary = imaginary;

        return _imaginary;
    }

    int Real() const {
        return _real;
    }

    int Imaginary() const {
        return _imaginary;
    }

    Complex operator++() {   // ������
        _real++;
        _imaginary++;


        return *this;
    }

    Complex operator++(int) {   // ������

        Complex temp(_real, _imaginary);

        _real++;
        _imaginary++;

        return temp;
    }

    operator int() {   // ����ȯ
        return _real;
    }

    operator float() {
        return _real;
    }

    /*
    operator DynamicArray() { // �ٸ� Ŭ���� Ÿ������ ����ȯ ���

    }
    */


    friend ostream& operator<< (ostream& out, Complex& right);
};

ostream& operator<< (ostream& out, Complex& right) {
    out << right._real << " + " << right._imaginary << "i";

    return out;
}

int main() {
    Complex complex(10, 10);

    cout << complex << endl;

    complex++;
    cout << complex << endl;

    ++complex;
    cout << complex << endl;

    Complex result(0, 0);

    cout << endl;
    cout << "������" << endl;
    result = complex++;   // ������
    cout << "result  = " << result << endl;
    cout << "complex = " << complex << endl;

    cout << endl;
    cout << "������" << endl;
    result = ++complex;   // ������
    cout << "result  = " << result << endl;
    cout << "complex = " << complex << endl;

    int a = (int)complex;

    cout << "a = " << a << endl;

    float c = (float)complex;

    cout << "c = " << c << endl;


    return 0;
}