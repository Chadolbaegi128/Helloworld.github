#include <iostream>
using namespace std;

template<typename Add>//템플릿 함수,typename을 여러개 지정 가능
Add add(Add a, Add b) {//템플릿 틀을 제공
    return a + b;
}

template<>   // 템플릿 특수화
string add(string a, string b) {
    return "error";
}

class Complex {
private:
    int _real;
    int _imaginary;

public:
    Complex(int real)
        :_real(real),_imaginary(0){}

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

    operator int() {   // 형변환하는 방법도 제공해줘야 합니다.
        return _real;
    }

    operator float() {   // 형변환
        return _imaginary;
    }

    void info() {
        cout << _real << showpos << _imaginary << "i" << endl;
        cout << noshowpos;
    }

    friend ostream& operator<<(ostream& o, Complex& ref);
};

// 일반함수로 연산자 오버로딩
ostream& operator<<(ostream& o, Complex& ref) {
    o << ref._real << showpos << ref._imaginary << "i" << endl;
    o << noshowpos;

    return o;
}


int main() {

    // Complex 객체를 만들어서 덧셈과 뺄셈을 하여 값을 출력해보세요.

    Complex a(10, -30);
    Complex c(10, 20);

    int d;
    d = a;

    cout << d << endl;

    float f = a;

    cout << f << endl;


    string e="Hello";
    string g="World";
    string h=add(e,g);

    cout << e << "\n";
    cout << g << "\n";

    cout << h<< "\n";


    return 0;
}