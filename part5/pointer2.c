#include "stdio.h"

// i= j没有问题
//*i = *j; // 会报错 *i *j的内存单元的控制权并没有分配到程序
int main(void) {
    int *i;
    int a;
    i = &a;
    printf("%d", *i);
}

/*
*i 会报错的，因为这是操作内存，非法内存
*/
int p(void) {
    int *i;
    int *j;
    *i = *j;
    return 0;
}


/*
不会报错 i j是变量
*/
int p1(void) {
    int *i;
    int *j;
    i = j;
    return 0;
}
