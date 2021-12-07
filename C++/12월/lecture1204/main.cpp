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

    void info() {
        cout << _real << showpos << _imaginary << "i" << endl;
        cout << noshowpos;
    }

   
};

//�Ϲ��Լ��� ������ �����ε�
ostream& operator<<(ostream& o, Complex& ref) {
    o << ref.Real() << showpos << ref.Imaginary() << "i" << "\n";
    o << noshowpos;

    return o;
}

int main() {

    // Complex ��ü�� ���� ������ ������ �Ͽ� ���� ����غ�����.

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