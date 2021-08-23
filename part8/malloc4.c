#include "stdio.h"
#include "mm_malloc.h"

int main() {

    int *p = (int *) malloc(10); // 10个字节
    printf("%ld\n", sizeof(p)); // 8个

    printf("%ld\n", sizeof(*p)); //4

/*    for (int i = 0; i < 5; ++i) {
        *(p + i + 3) = i;
//        scanf("%d\n", p+1); // 4
    }
    printf("%ld\n", sizeof(*p)); // 4

    for (int i = 0; i < 8; ++i) {
        printf("%d\n", p[i]);
    }*/
}