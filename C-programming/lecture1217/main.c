#include <stdio.h>

// void (return ���� ����)
// return type  �Լ���(�Ű�����) {
//
// return ret;
//}

int add(int left, int right) {
	int ret;
	ret = left + right;
	return ret;
}

// ���ϰ��� ���� ��쿡�� return type�� void�� ����.
void print(char *str) {
	printf("%s\n", str);
}

//�Ű������� ���� ��쿡�� ��ĭ���� ���θ� �ȴ�.
void print2() {
	printf("Monster\n");
}

int twoValue() {
	return 2;
}

int main() {
	int a = 20;
	int b = 30;

	int ret = add(a, b);//�Լ��� ȣ���� �� ���޵� ���� ����(argument)��� �Ѵ�.

	printf("%d + %d = %d\n", a, b, ret);

	print("monster");

	print2();

	ret = twoValue();

	printf("ret = %d\n", ret);
	return 0;
}