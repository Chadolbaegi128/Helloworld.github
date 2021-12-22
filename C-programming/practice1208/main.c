#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*
   int x = 0;

   printf("x의 값을 입력하세요:");
   scanf("%d", &x);

   int result = (0 < x) && (x < 10); // 0 < x < 10

   printf("x가 0과 10사이에 있나요? %d\n", result);
   */

	//사각형 안에 점 위치 확인
	int topX = 0, topY = 0;
	int bottomX = 0, bottomY = 0;
	int pointX = 0, pointY = 0;

	printf("사각형의 각 좌표값을 입력하세요.\n");
	printf("좌상단 x값: ");
	scanf("%d", &topX);
	printf("좌상단 y값: ");
	scanf("%d", &topY);
	printf("우하단 x값: ");
	scanf("%d", &bottomX);
	printf("우하단 y값: ");
	scanf("%d", &bottomY);

	printf("입력받은 topX: %d, topY: %d, bottomX: %d, bottomY: %d\n\n", topX, topY, bottomX, bottomY);
	
	printf("점의 x값과 y값을 입력하세요.\n");
	printf("x값을 입력하세요: ");
	scanf("%d", &pointX);
	printf("y값을 입력하세요: ");
	scanf("%d", &pointY);

	// 사각형 안에 입력 받은 점이 있는지 확인 하는 로직을 만드세요....

	int resultX = (pointX < topX) && (bottomX < pointX);
	int resultY = (pointY < topY) && (bottomY < pointY);
	
	resultX&& resultY ? printf("사각형 안에 point(x,y)가 존재한다.\n") :
		printf("사각형 안에 point(x,y)가 존재하지 않는다.\n");



	return 0;
}