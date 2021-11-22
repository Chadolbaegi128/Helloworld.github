#include <iostream>
#include <math.h>

using namespace std;

class Point {
private:
	int _x;
	int _y;

public:
	Point():_x(0),_y(0){}
	Point(int x, int y):_x(x),_y(y){}

	void SetX(int x) {
		_x = x;
	}

	int GetX() {
		return _x;
	}

	void SetY(int y) {
		_y = y;
	}

	int GetY() {
		return _y;
	}

	void info() {
		cout << "xÁÂÇ¥: " << _x << "\n";
		cout << "yÁÂÇ¥: " << _y << "\n";
	}

};

int main() {

	return 0;
}