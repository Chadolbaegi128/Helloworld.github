#include <iostream>
#include <math.h>

using namespace std;

// 사각형, 삼각형, 원클래스를 만들고 면적을 구하는 멤버함수
// 만드시고 면적을 출력하시면됩니다.

class Point {
private:
	int _x;
	int _y;

public:
	Point()
		:_x(0), _y(0) {};

	Point(int x, int y)
		:_x(x), _y(y) {}

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
		cout << "-좌표-" << "\n" << "\n";
		cout << "x: " << _x << "\n";
		cout << "y: " << _y << "\n";
	}
};

class Line {
private:
	Point _pt1;
	Point _pt2;

public:
	Line(int x1, int y1, int x2, int y2)
		:_pt1(x1,y1), _pt2(x2,y2)
	{	}

	Line(Point pt1, Point pt2)
		:_pt1(pt1), _pt2(pt2){}

	float GetLength() {
		float base = _pt2.GetX() - _pt1.GetX();
		float height = _pt2.GetY() - _pt1.GetY();

		float length = sqrt(pow(base, 2) + pow(height, 2));

		return length;

	}

	void info() {
		cout << "\n";
		cout << "-두 점 사이의 길이-" << "\n" << "\n";
		cout << "(x1,y1)에서 (x2,y2)사이의 길이: " << GetLength() << "\n";
	}
};

// 사각형, 삼각형, 원 클래스를 만드시고
// 면적을 구하는 멤버함수를 구현하시고
// 각 도형의 객체를 만든 후에 면적을 출력해보세요..

//사각형
class Rectangle {
private:
	Point _topPt;
	Point _bottomPt;

public:
	Rectangle(int x1, int y1, int x2, int y2)
		:_topPt(x1, y1), _bottomPt(x2, y2){}

	Rectangle(Point topPt, Point bottomPt)
		:_topPt(topPt), _bottomPt(bottomPt){}

	void SetTopPoint(int x1, int y1) {
		_topPt.SetX(x1);
		_topPt.SetY(y1);
	}

	Point GetTopPoint() {
		return _topPt;
	}

	void SetBottomPoint(int x2, int y2) {
		_bottomPt.SetX(x2);
		_bottomPt.SetY(y2);
	}

	Point GetBottomPoint() {
		return _bottomPt;
	}

	float GetArea() {
		float width = _topPt.GetX() - _bottomPt.GetX();
		float height = _topPt.GetY() - _bottomPt.GetY();

		return width * height;
	}

	void info() {
		cout << "\n";
		cout << "-사각형의 가로, 세로, 넓이-" << "\n" << "\n";
		cout << "사각형의 너비: " << GetTopPoint().GetX() - GetBottomPoint().GetX() << "\n";
		cout << "사각형의 높이: " << GetTopPoint().GetY() - GetBottomPoint().GetY() << "\n";
		cout << "사각형의 면적: " << GetArea() << "\n";
	}
};

//삼각형
class triAngle {
private:
	Point _topPt2;
	Point _bottomPt2;

public:
	triAngle(int x1, int y1, int x2, int y2)
		:_topPt2(x1, y1),_bottomPt2(x2, y2){}

	triAngle(Point topPt2, Point bottomPt2)
		:_topPt2(topPt2),_bottomPt2(bottomPt2){}

	void SetTopPoint2(int x1, int y1) {
		_topPt2.SetX(x1);
		_topPt2.SetY(y1);
	}

	Point GetTopPoint2() {
		return _topPt2;
	}

	void SetBottomPoint2(int x2, int y2) {
		_topPt2.SetX(x2);
		_topPt2.SetY(y2);
	}

	Point GetBottomPoint2(){
		return _bottomPt2;
	}

	float GetArea() {
		float width = _topPt2.GetX() - _bottomPt2.GetX();
		float height = _topPt2.GetY() - _bottomPt2.GetY();

		return (width * height) / 2;
	}

	void info() {
		cout << "\n";
		cout << "-삼각형의 밑변, 높이, 면적-" << "\n" << "\n";
		cout << "삼각형 밑변의 길이: " << GetTopPoint2().GetX() - GetBottomPoint2().GetX() << '\n';
		cout << "삼각형의 높이: " << GetTopPoint2().GetY() - GetBottomPoint2().GetY() << '\n';
		cout << "삼각형의 넓이: " << GetArea() << "\n";
	}
};

class Circle {
private:
	Point _middlePt;
	float _radius;
	const float _PI = 3.14f;

public:
	Circle():_radius(0.0f){}
	Circle(Point middlePt, float radius)
		:_middlePt(middlePt), _radius(radius){}

	Circle(Point middlePt, Point borderPt)
		:_middlePt(middlePt)
	{
		_radius = sqrt(pow(middlePt.GetX() - borderPt.GetX(), 2) +
			pow(middlePt.GetY() - borderPt.GetY(), 2));
	}

	void SetCircle(float middleX, float middleY, float radius) {
		_middlePt.SetX(middleX);
		_middlePt.SetY(middleY);

		_radius = radius;
	}

	float GetArea() {
		return _PI * _radius*_radius;
	}

	Point GetMiddlePt() {
		return _middlePt;
	}

	float GetRadius() {
		return _radius;
	}

	void info() {
		cout << "\n";
		cout << "-원의 중심 좌표, 반지름, 면적-" << "\n" << "\n";
		cout << "원 중점의 x좌표: " << GetMiddlePt().GetX() << "\n";
		cout << "원 중점의 y좌표: " << GetMiddlePt().GetY() << "\n";
		cout << "원 반지름: " << GetRadius() << "\n";
		cout << "원 면적: " << GetArea() << "\n";
	}
};

int main() {
	Point pt(2,2);
	Line line(6, 6, 4, 4);
	Rectangle rect(6, 6, 4, 4);
	triAngle tri(6, 6, 4, 4);
	Circle circle(Point(2, 2), Point(4, 4));

	pt.info();
	line.info();
	rect.info();
	tri.info();
	circle.info();

	return 0;
}