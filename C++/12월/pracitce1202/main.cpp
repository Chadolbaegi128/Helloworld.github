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

    // µ¡¼À, »¬¼À ¿¬»êÀÚ ¿À¹ö·Îµù

    void info() {
        cout << _real << showpos << _imaginary << "i" << endl;
        cout << noshowpos;
        cout << "\n";
    }

};



int main() {
    // Complex °´Ã¼¸¦ ¸¸µé¾î¼­ µ¡¼À°ú »¬¼ÀÀ» ÇÏ¿© °ªÀ» Ãâ·ÂÇØº¸¼¼¿ä.

    Complex a(10, -10);
    Complex b(20, -30);
    Complex c = a + b;
    Complex d = a - b;

    a.info();
    b.info();

    cout << "Complex Å¬·¡½º µ¡¼À °è»ê: ";
    c.info();
    cout << "Complex Å¬·¡½º »¬¼À °è»ê: ";
    d.info();

    return 0;
}