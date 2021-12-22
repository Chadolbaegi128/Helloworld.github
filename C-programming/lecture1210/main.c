#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int buttonNum = 0;

	printf("버튼 번호를 입력하세요: ");
	scanf("%d", &buttonNum);

	//정수값에 따라서 분기시에는 switch-case문 사용
	// 0: TV꺼, 1:TV켜, 2:volume up, 3: volumndown
	// switch-case문은 정수값을 처리하는 case문의 위치로
   // 분기한 후에 break 구문을 만날때까지 명령어를 처리합니다.

	switch (buttonNum)
	{case 0:
	case 1:
	case 2:
		printf("0~3 범위\n");
		break;

	case 3:
	case 4:
	case 5:
	case 10:
		//int a = 20;
		// 변수를 만들 경우에는 중괄호 블럭안에 만들어야 함.
		printf("3 ~ 5, 10 범위");
		break;

	case 11:
	{
		int a = 20;
		int b = 30;
		printf("a = %d, b = %d\n",a, b);
	}
	break;
	default://default는 생략 가능
	{
		if (buttonNum > 12 && buttonNum < 60) {
			printf("케이블 채널");
		}
	}
		break;
	}

	return 0;
}