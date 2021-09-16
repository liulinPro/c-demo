#include "stdio.h"

int main(){
    int a = 10, b = 20;
    int *p = &a;
    int const *p1 = &a;  //    常量指针    能改变地址 不能通过指针改变这个值
    int * const p2 = &a; //    指针常量    能改变值   不能改变地址

    *p = 11;      // 1 error
    *p1 = 12;     // 2 error
    *p2 = 13;     // 3 true

    printf("%d\n", a);
    p = &b;      // 4 error
    p1 = &b;     // 5 true
    p2 = &b;     // 6 error
}