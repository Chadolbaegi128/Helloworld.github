#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a = 30;
    int b = 10;
    int c = 100;
    int flag = 0;   // Ż��� flag

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
                printf("ù��° ���� �Է��ϼ���: (50�Է��ϸ� Ż��)");
                scanf("%d", &c);
                if (c == 50 && b == 5 && a == 10) {
                   goto LoopExit;
                }

                for (int i = 0; i < 10; i++) {

                }
            }
        }
    }

LoopExit: printf("Ż��");

    return 0;
}