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


    // 덧셈, 뺄셈 연산자 오버로딩
    Complex operator+(Complex& ref) {
        /*
        Complex temp(_real + ref._real, _imaginary + ref._imaginary);

        return temp;
        */
        return Complex(_real + ref._real, _imaginary + ref._imaginary);
    }

    Complex operator-(Complex& ref) {

        return Complex(_real - ref._real, _imaginary - ref._imaginary);
    }

    Complex operator+(int ref) {
        return Complex(_real + ref, _imaginary);
    }

    Complex operator++() {   // 전치형
        _real++;
        _imaginary++;

        return *this;
    }

    Complex operator++(int) {   // 후치형
        Complex temp(*this);

        _real++;
        _imaginary++;

        return temp;
    }

    Complex operator--() {   // 전치형
        _real--;
        _imaginary--;

        return *this;
    }

    Complex operator--(int) {   // 후치형
        Complex temp(*this);

        _real--;
        _imaginary--;

        return temp;
    }

    void info() {
        cout << _real << showpos << _imaginary << "i" << endl;
        cout << noshowpos;
    }

   
};

//일반함수로 연산자 오버로딩
ostream& operator<<(ostream& o, Complex& ref) {
    o << ref.Real() << showpos << ref.Imaginary() << "i" << "\n";
    o << noshowpos;

    return o;
}

int main() {

    // Complex 객체를 만들어서 덧셈과 뺄셈을 하여 값을 출력해보세요.

    Complex a(10, -10);
    Complex c(10, 10);
    c = ++a;
    c.info();
    a.info();

    cout << endl;
    c = a++;
    c.info();
    a.info();

    

	return 0;
}