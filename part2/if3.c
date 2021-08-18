#include "stdio.h"

int main(void) {
    int i, j, tmp;
    i = 3;
    j = 5;
    if (i < j) {
        tmp = i;
        i = j;
        j = tmp;
    }
    printf("%d %d", i, j);
}