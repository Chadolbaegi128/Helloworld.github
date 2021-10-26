#include <iostream>
#include <cmath>

using namespace std;

class Point {
private:
	int _x;
	int _y;

public:
	Point():_x(0),_y(0){}
	Point(int x, int y):_x(x),_y(y){}

	void SetX(int value) {
		_x = value;
	}

	int GetX() {
		return _x;
	}

	void SetY(int value) {
		_y = value;
	}

	int GetY() {
		return _y;
	}
};

class Line {//포함
private:
	Point _pt1;
	Point _pt2;
	Point _pt3;//삼각형 계산

public:
	Line():_pt1(0,0),_pt2(0,0), _pt3(0,0){}
	Line(int x1,int y1, int x2, int y2, int x3, int y3)
		:_pt1(x1,y1),_pt2(x2,y2), _pt3(x3,y3){}

	void SetPt1(int x, int y) {
		_pt1.SetX(x);
		_pt1.SetY(y);
	}

	Point GetPt1() {
		return _pt1;
	}

	void SetPt2(int x, int y) {
		_pt2.SetX(x);
		_pt2.SetY(y);
	}

	Point GetPt2() {
		return _pt2;
	}

	void SetPt3(int x, int y) {
		_pt3.SetX(x);
		_pt3.SetY(y);
	}

	Point GetPt3() {
		return _pt3;
	}

	
};

class Area {
private:

};

int main() {

	

	return 0;
}