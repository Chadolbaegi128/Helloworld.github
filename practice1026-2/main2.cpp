#include <iostream>
#include <cmath>

using namespace std;

class Point {
private:
	int _x, _y;

public:
	Point()
		:_x(0), _y(0){}
	Point(int x, int y)
		:_x(x), _y(y){}

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

	void info() {
		cout << "X: " << _x << "\n";
		cout << "Y: " << _y << "\n";
	}
};

class Line {
private:
	Point _pt1, _pt2;//����.

public:
	Line()
		:_pt1(0,0), _pt2(0,0){}

	Line(int x1, int y1, int x2, int y2)
		:_pt1(x1, y1), _pt2(x2, y2){}

	void SetPt1(int x,int y){
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

	float GetLength() {//���� ���� ���
					   //sqrt: �������� ���ϴ� �Լ�, pow: ������ ���ϴ� �Լ�
					   //sqrt->(�⺻��, ���� ������ ��), pow->(�⺻��, ���� ������ ��)
		float length = sqrt(pow(_pt2.GetX() - _pt1.GetX(), 2) + pow(_pt2.GetY() - _pt1.GetY(), 2));
		return length;
	}

	void info() {
		cout << "_pt1: " << _pt1.GetX()<<","<<_pt1.GetY()<< "\n";
		cout << "_pt2: " << _pt2.GetX() <<","<<_pt2.GetY()<<"\n";
	
	}
};

int main() {
	Point pt(10, 10);
	pt.info();
	
	Line li(10,10,20,20);
	li.info();

	cout << "\n";
	cout <<"x�� ������ y�� ������ ��: " << pow(10, 2) << "\n";
	cout << "\n";
	cout <<"'_pt1'���� '_pt2 ���������� �Ÿ�: " << sqrt(pow(10, 2) + pow(10, 2)) << "\n";
	 
	return 0;
}