#include "stdio.h"

void f(int **p) {
    int i
    *p = &i;
}


int main(void) {
    int *a;
    f(&a);
    // 语法没有问题, 逻辑有问题
    printf("%d\n", *a);
}