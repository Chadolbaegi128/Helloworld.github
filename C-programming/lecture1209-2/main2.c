#include <stdio.h>

int main() {
	// sizeof����� ������ ����Ÿ Ÿ���� byte���� �������� ���� ����
  // �ݴϴ�.
  // �����߿� �۵��Ѵ� �����ڰ� �ƴմϴ�.
  // ������ �����߿� �̸� ����� �Ǿ� ���ϴ�.
  // �����߿� ����Ǵ� ������ ���ø� �ȵ˴ϴ�.

	int size = sizeof(char);//������Ÿ�Կ� ���
	printf("char���� ������: %d\n\n", size);

	size = sizeof(int);//������Ÿ�Կ� ���
	printf("int���� ������: %d\n\n", size);

	size = sizeof(short);//������Ÿ�Կ� ���
	printf("short���� ������: %d\n\n", size);

	size = sizeof(long);//������Ÿ�Կ� ���
	printf("long���� ������: %d\n\n", size);

	size = sizeof(float);//������Ÿ�Կ� ���
	printf("float���� ������: %d\n\n", size);

	size = sizeof(double);//������Ÿ�Կ� ���
	printf("double���� ������: %d\n\n", size);

	int a;

	size = sizeof(a);
	printf("a������ �������: %d\n", size);

	return 0;
}