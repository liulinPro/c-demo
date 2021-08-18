#include "stdio.h"

int main(void) {
    int i = 0;
    int sum = 0;

    do {
        sum += i;
        i++;
    } while (i <= 100);
    printf("%d", sum);
}