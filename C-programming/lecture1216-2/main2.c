#include <stdio.h>

typedef struct tagPoint {
	int x;
	int y;
}Point;

typedef struct tagRectangle {
	Point top;
	Point bottom;
}Rectangle;

int main() {
	Rectangle rect;//구조체 변수

	rect.top.x = 10;
	rect.top.y = 10;

	rect.bottom.x = 20;
	rect.bottom.y = 20;

	int width = rect.bottom.x - rect.top.x;
	int height = rect.bottom.y - rect.top.y;
	int area = width * height;

	printf("topx: %d, topy: %d, bottomx: %d, bottomy: %d의 사각형의 면적은: %d\n",
		rect.top.x, rect.top.y, rect.bottom.x, rect.bottom.y, area);

	return 0;
}