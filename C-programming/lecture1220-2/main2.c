#include <stdio.h>
#include <string.h>

// ����� ����
// argc ���޵� ���ڿ��� ����(�������ϸ� ����)
// argv ���޵� ���ڿ��� �ּҰ�
int main(int argc, char* argv[]) {

	int left = atoi(argv[1]);
	int right = atoi(argv[2]);

	printf("%d + %d = %d\n", left, right, left + right);



	return 0;
}