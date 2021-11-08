#include <iostream>

using namespace std;

// º¹¼Ò¼ö
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

    friend ostream& operator<< (ostream& out, Complex& right);
};

ostream& operator<< (ostream& out, Complex& right) {
    out << right._real << " + " << right._imaginary << "i";

    return out;
}

int main() {
    Complex complex(10, 10);

    cout << complex << endl;


    return 0;
}