#include <stdio.h>

// ������ ����
// argc ���޵� ���ڿ��� ����(�������ϸ� ����)
// argv ���޵� ���ڿ��� �ּҰ�
int main(int argc,char* argv[]) {
	
	if (argc > 0) {
		for (int i = 0; i < argc; i++) {
			printf("%s\n", argv[i]);
		}
	}

	return 0;
}