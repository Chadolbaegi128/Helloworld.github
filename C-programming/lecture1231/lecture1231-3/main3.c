#include <stdio.h>
#include <time.h>
#define PI 3.14

/*
#define NORTH 0
#define SOUTH 1;
*/

//열거형
enum Direction {
	NORTH,//0
	SOUTH,//1
	EAST,//2
	WEST,//3

	NORTHEAST=15,
	NORTHWEST,//16
	SOUTHEAST=18
};

int main() {
	srand(time(NULL));

	float value = PI;

	//const int NORTH = 0;
	const int value2 = 1;   // const형 변수는 값을 변경할 수 없습니다.

	//value2 = 2;

	int direction = rand() % 4;

	enum Direction direct = rand() % 4;

	switch(direct){
	case NORTH:
		printf("North\n");
		break;

	case SOUTH:
		printf("South\n");
		break;

	case EAST:
		printf("EAST\n");
		break;

	case WEST:
		printf("WEST\n");
		break;
	}

	return 0;
}