#include "stdio.h"

// 排序
int main(void) {
    int a, b, c, tmp;
    a = 3;
    b = 2;
    c = 5;

    printf("%d %d %d\n", a, b, c);
    if (a > b) {
        tmp = a;
        a = b;
        b = tmp;
    }
    if (a > c) {
        tmp = a;
        a = c;
        c = tmp;
    }
    if (b > c) {
        tmp = b;
        b = c;
        c = tmp;
    }
    printf("%d %d %d", a, b, c);
}