#include "stdio.h"

// 函数 形参，void表示没有形参
void max(int i, int j) {
    if (i > j) {
        printf("%d", i);
    }
}

int main(void) {
    int a, b;
    a = 4, b = 3;
    max(a, b);
}