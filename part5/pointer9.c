# include <stdio.h>
# include "mm_malloc.h"

void f(int **q);

int main(void) {
    int i = 9;
    //printf("%p\n", &i);// i的地址
    int *p = &i;// int  *p;  p = &i;

    //printf("%p\n", p);// i的地址
    //printf("%d\n", *p);// 指向i的地址的值
    f(&p);
    //printf("%p\n", p);
    //printf("%d\n", *p);// 可能会error，也可能是无效值
    return 0;
}

void f(int **p) {
    //printf("%p\n", *p);
    //*p = (int *) 0xFFFFFFFF;// 这里的*q就是, 相当于(*(&p)) 那么也就是p 改变的是p的指向
}