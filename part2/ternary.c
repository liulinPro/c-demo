#include "stdio.h"

// 三目运算符，逗号表达式
int main(void) {
    int i;
    i = (3 > 2 ? 5 : 3);
    printf("%d", i);
    i = (13, 12, 23);
    printf("%d", i);
}