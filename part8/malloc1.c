#include "stdio.h"
#include "mm_malloc.h"

int main() {
    int i = 5;
    int *p = (int *) malloc(sizeof(int));
    *p = 5;
    printf("%d\n", *p);
    free(p);
    printf("%d", *p);
}