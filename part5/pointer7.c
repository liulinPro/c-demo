#include "stdio.h"

int main(void) {
//    int a[5];
//    printf("%p\n", &a[3]);
//    printf("%p\n", &a[2]);
//    printf("%ld\n", &a[3] - &a[2]);
//    printf("%ld\n", sizeof(a));
//    int b = 4;
//    printf("%ld\n", sizeof(b));
//    int *c;
//    printf("%ld\n", sizeof(c));
//    c = &b;
//    printf("%ld\n", sizeof(*c));
//    char *d;
//    printf("%ld\n", sizeof(d));

    int c[] = {1, 2, 3};
    for (int i = 0; i < 3; ++i) {
        printf("%d",c[i]);
    }
    printf("%ld", sizeof(c));
}