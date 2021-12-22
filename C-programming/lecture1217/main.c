#include <stdio.h>

// void (return 값이 없음)
// return type  함수명(매개변수) {
//
// return ret;
//}

int add(int left, int right) {
	int ret;
	ret = left + right;
	return ret;
}

// 리턴값이 없는 경우에는 return type을 void로 지정.
void print(char *str) {
	printf("%s\n", str);
}

//매개변수가 없는 경우에는 빈칸으로 놔두면 된다.
void print2() {
	printf("Monster\n");
}

int twoValue() {
	return 2;
}

int main() {
	int a = 20;
	int b = 30;

	int ret = add(a, b);//함수를 호출할 때 전달된 값을 인자(argument)라고 한다.

	printf("%d + %d = %d\n", a, b, ret);

	print("monster");

	print2();

	ret = twoValue();

	printf("ret = %d\n", ret);
	return 0;
}