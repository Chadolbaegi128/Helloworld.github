#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int buff[] = { 10, 20, 30, 40, 50 };
    int output[6];

    FILE* fp;

    int size, count;

    fp = fopen("binary.bin", "wb");

    if (fp == NULL) {
        printf("파일 열기 실패\n");
        return 0;
    }

    size = sizeof(int);

    count = sizeof(buff) / sizeof(int);
    fwrite(&buff, size, count, fp);
    fclose(fp);

    return 0;
}