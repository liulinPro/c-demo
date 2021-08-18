#include "stdio.h"

void f(void);

void g(void) {
    f();
}

void f(void) {
    printf("liulin");
}

int main(void) {
    g();
}