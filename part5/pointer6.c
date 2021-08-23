#include "stdio.h"

void f(int *pArr, int len);

int main(void) {
    int a[] = {1, 2, 3, 4, 5};
    //printf("%ld\n",sizeof(a)/sizeof(a[0]));
    //printf("%ld\n",sizeof(a)/sizeof(int));
    printf("%p\n", a);
    f(a, 5);
//    int b[6] = {1, 2, 3, 4, 5, 6};
//    f(b, 6);
}

void f(int *pArr, int len) {
    printf("%ld\n", sizeof(pArr));
    printf("%ld\n", sizeof(*pArr));
    printf("%p\n", pArr);
    // 编译器做的运算c
    printf("%p\n", pArr + 1);
    for (int i = 0; i < len; ++i) {
        //printf("%d\n", pArr[i]);
        printf("%d\n", *(pArr + i));
    }
}