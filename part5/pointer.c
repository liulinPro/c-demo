#include "stdio.h"

int main(void) {
    int a = 1;
    int c = 2;
    int e = 3;
    int *b;
    int *d;
    b = &a;
    b = &c;
    *b = 3;
    d = &e;
    // *d需要被分配 才能这样
    *b = *d;
    printf("%p\n", b);
    printf("%d\n", *b);
    printf("%d\n", c);
    printf("%d\n", a);
    printf("%d\n", *d);
}