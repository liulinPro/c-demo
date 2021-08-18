#include "stdio.h"

int main(void) {
    int a = 1;
    int *b;
    b = &a;
    printf("%d", *b);
}