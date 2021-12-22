#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a = 30;
    int b = 10;
    int c = 100;
    int flag = 0;   // 탈출용 flag

    while (a--) {
        while (b--) {
            while (c--) {
                if (c == 50 && b == 5 && a == 10) {
                    flag = 1;
                    break;
                }

                for (int i = 0; i < 10; i++) {

                }
            }
            if (flag == 1) break;
        }
        if (flag == 1)break;
    }

    while (a--) {
        while (b--) {
            while (c--) {
                printf("첫번째 값을 입력하세요: (50입력하면 탈출)");
                scanf("%d", &c);
                if (c == 50 && b == 5 && a == 10) {
                   goto LoopExit;
                }

                for (int i = 0; i < 10; i++) {

                }
            }
        }
    }

LoopExit: printf("탈출");

    return 0;
}