#include <stdio.h>
// C���� ������ ���� ��ġ 
// ������ ���� ��ġ�� ���� ���ӱⰣ
// ���ӱⰣ, ���ٹ���
int global = 0;//�ܺκ���(��������)
//���α׷��� ����ɶ� �Ҵ�ǰ� ���α׷��� ����ɶ�
//�������ϴ�.
//�ܺκ����� ������ ��� ���α׷� �帧�� ����
//Ȯ���� ���� ������ �������� �ʴ´�.

int add(int a, int b) {
	int sum;//���ú���(��������),�ڵ�����
	sum = a + b;

	global = 20;//�ܺκ���

	{
		int sum;
	}

	return sum;
}

int score(int value) {
	static int score = 0;//���ú���, ��������(���� ������ �ʱ�ȭ �ѹ�)
	//���������� �޸� �Ҵ��� �������� �ʽ��ϴ�.
	//���α׷��� ����Ǵ� ���� ������ �����˴ϴ�.

	score += value;

	return score;
}

int main() {
	int a = 20;
	int b = 30;

	int sum = add(a, b);

	global = 100;//�ܺκ����� ��𼭳� ���ٰ���

	for (int i = 0; i < 10; i++) {
		score(i);
	}

	printf("score = %d\n", score(0));

	printGlobal();

	return 0;
}