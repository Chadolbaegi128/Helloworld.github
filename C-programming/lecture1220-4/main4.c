#include <stdio.h>

int* score(int value) {
	static int scoreValue = 0;//정적변수

	// 자동변수의 주소값 함수외부로 전달해서
   // 사용하시면 안됩니다.
   // 자동변수는 함수가 종료될때 공간이 해제되서
   // 다른 변수 생성될때 사용되기때문에 
   // 자동변수는 함수가 종료되면 없어졌다고 보는게
   // 타당합니다.

	scoreValue += value;
	printf("scoreValue = %d\n", scoreValue);

	return &scoreValue;//정적변수의 주소값

}

int main() {

	for (int i = 0; i < 10; i++) {
		score(i);
	}
	printf("\n");
	printf("score = %d\n", *score(0));
	printf("\n");
	int* pscore = score(0);
	printf("\n");
	*pscore = 1000;
	
	score(0);

	return 0;
}