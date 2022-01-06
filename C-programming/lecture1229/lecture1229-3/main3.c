#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}

int div(int a, int b) {
	return a / b;
}

// calculator�Լ��� �Ű������� �Լ��� �ּҸ� ����.
int calculator(int(*pfunc)(int, int), int a, int b) {
	return pfunc(a, b);
}

int GetOpCode(char* parray, char op) {//i=>pfuncArray �迭�� �ε��� ��ȣ
	for (int i = 0; i < 4; i++) {
		if (parray[i] == op) {
			return i;//�迭 �ε��� ��ȣ�� �����Ѵٴ� �ǹ�
		}
	}
	return -1;
}

int main() {
	int a = 0;
	int b = 0;
	char op = 0;

	int(*pfuncArray[4])(int, int);//�Լ� ������ �迭

	pfuncArray[0] = add;
	pfuncArray[1] = sub;
	pfuncArray[2] = mul;
	pfuncArray[3] = div;

	char opArray[4] = {'+', '-', 'x', '/'};

	printf("ù��° �������� �Է��ϼ���: ");
	scanf("%d", &a);

	printf("�ι�° �������� �Է��ϼ���: ");
	scanf("%d", &b);

	printf("���� ����� �Է��ϼ���(0(+), 1(-), 2(*), 3(/)): ");
	scanf(" %c", &op); // �ι�° ������ �Է½� ���� �Է��� �ɷ����� ���ؼ� ȣ��


	op = GetOpCode(opArray, op);

	if (op != -1) {
		printf("%d %c %d = %d\n", a, opArray[op], b, calculator(pfuncArray[op], a, b));
	}

	return 0;
}