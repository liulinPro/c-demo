#include <stdio.h>

int x = 0;
int y = 5;

int func1() {
    extern int p, q;
    printf("p is %d, q is %d\n", p, q);
    return 0;
}

int p = 8;
int q = 10;

int main() {
    func1();
    printf("x is %d, y is %d\n", x, y);
}