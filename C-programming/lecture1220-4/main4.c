#include <stdio.h>

int* score(int value) {
	static int scoreValue = 0;//��������

	// �ڵ������� �ּҰ� �Լ��ܺη� �����ؼ�
   // ����Ͻø� �ȵ˴ϴ�.
   // �ڵ������� �Լ��� ����ɶ� ������ �����Ǽ�
   // �ٸ� ���� �����ɶ� ���Ǳ⶧���� 
   // �ڵ������� �Լ��� ����Ǹ� �������ٰ� ���°�
   // Ÿ���մϴ�.

	scoreValue += value;
	printf("scoreValue = %d\n", scoreValue);

	return &scoreValue;//���������� �ּҰ�

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