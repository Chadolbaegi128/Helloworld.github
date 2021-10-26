#include <iostream>
#include <cmath>

using namespace std;

class Point {
private:
	int _x, _y;

public:
	Point(): _x(0), _y(0){}
	Point(int x, int y):_x(x),_y(y){}

	void SetX(int value) {
		_x = value;
	}

	void SetY(int value) {
		_y = value;
	}

	int GetX() {
		return _x;
	}

	int GetY() {
		return _y;
	}

	void info() {
		cout << "X: " << _x << "\n";
		cout << "Y: " << _x << "\n";
	}
};

class Line {
private:
	int _x1, _y1, _x2, _y2;

public:
	Line()
		:_x1(0), _y1(0), _x2(0), _y2(0){}

	Line(int x1, int y1, int x2, int y2)
		:_x1(x1), _y1(y1), _x2(x2), _y2(y2){}

	void SetX1(int value) {
		_x1 = value;
	}

	int GetX1() {
		return _x1;
	}

	void SetY1(int value) {
		_y1 = value;
	}

	int GetY1() {
		return _y1;
	}

	void SetX2(int value) {
		_x2 = value;
	}

	int GetX2() {
		return _x2;
	}

	void SetY2(int value) {
		_y2 = value;
	}

	int GetY2() {
		return _y2;
	}

	void SetLength() {

	}

	float GetLength() {
		
	}
};

int main() {
	Point pt(10, 10);
	pt.info();


	return 0;
}