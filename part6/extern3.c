#include "stdio.h"

extern int max();

int main(void) {
    int c = max();
    printf("%d", c);
}