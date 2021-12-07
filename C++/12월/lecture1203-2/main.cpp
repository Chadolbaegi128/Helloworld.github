#include <iostream>
using namespace std;

template<typename Add>//���ø� �Լ�,typename�� ������ ���� ����
Add add(Add a, Add b) {//���ø� Ʋ�� ����
    return a + b;
}

template<>   // ���ø� Ư��ȭ
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


    // ����, ���� ������ �����ε�
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

    Complex operator++() {   // ��ġ��
        _real++;
        _imaginary++;

        return *this;
    }

    Complex operator++(int) {   // ��ġ��
        Complex temp(*this);

        _real++;
        _imaginary++;

        return temp;
    }

    Complex operator--() {   // ��ġ��
        _real--;
        _imaginary--;

        return *this;
    }

    Complex operator--(int) {   // ��ġ��
        Complex temp(*this);

        _real--;
        _imaginary--;

        return temp;
    }

    operator int() {   // ����ȯ�ϴ� ����� ��������� �մϴ�.
        return _real;
    }

    operator float() {   // ����ȯ
        return _imaginary;
    }

    void info() {
        cout << _real << showpos << _imaginary << "i" << endl;
        cout << noshowpos;
    }

    friend ostream& operator<<(ostream& o, Complex& ref);
};

// �Ϲ��Լ��� ������ �����ε�
ostream& operator<<(ostream& o, Complex& ref) {
    o << ref._real << showpos << ref._imaginary << "i" << endl;
    o << noshowpos;

    return o;
}


int main() {

    // Complex ��ü�� ���� ������ ������ �Ͽ� ���� ����غ�����.

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