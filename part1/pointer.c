#include "stdio.h"

void fun_pointer(int *b) {
    *b = 2;
}

void fun_var(int a) {
    a = 3;
}

/*
 * 指针的特点
 */

int main(void) {
    int a = 1;
    fun_var(a);
    printf("%d\n", a);
    fun_pointer(&a);
    printf("%d\n", a);
}
