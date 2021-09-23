#include<stdio.h>
#include<mm_malloc.h>

int main() {
    int *p = NULL;
    p = (int*) malloc(sizeof(int));
    *p =200;
    printf("free前， %d\n", *p); //200
    free(p);
    if (p != NULL) {
        printf("free, 未设置NULL,%d\n", *p); //可能是个垃圾值
    }
}



