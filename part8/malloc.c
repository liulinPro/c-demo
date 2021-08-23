#include "stdio.h"
#include "mm_malloc.h"

/*
* p 是指针变量，静态内存 p指向的地址内存是动态内存
 */
int main(void) {
    int *p = (int *) malloc(1);
    printf("%ld\n", sizeof(p));
    for (int j = 0; j < 41; ++j) {
        p[j] = j;
    }
    for (int j = 0; j < 41; ++j) {
        printf("%d\n", p[j]);
    }
    printf("%ld\n", sizeof(*p));
}