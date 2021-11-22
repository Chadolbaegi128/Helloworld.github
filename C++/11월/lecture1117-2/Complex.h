#pragma once

#include <iostream>

using namespace std;

class Complex {
private:
	int _real;
	int _imaginary;

public:
	Complex(int real, int imaginary)
		:_real(real), _imaginary(imaginary)
	{}

	int GetReal() {//인라인함수로 만들어 달라는 요청으로 인식함
		return _real;
	}

	void SetReal(int value) {//인라인함수
		_real = value;
	}

	int GetImaginary() {
		return _imaginary;
	}

	void Setimaginary(int value) {
		_imaginary = value;
	}

	inline void info();
};

inline void Complex::info() {
	cout << _real << showpos << _imaginary << " i" << "\n";
}