#include "stdio.h"


// 多级指针
int main() {
    int i = 10;
    int *j;
    j = &i;
    int **p = &j;
    int ***r = &p;
    printf("%d\n",*j);
    printf("%d\n",**p);
    printf("%d\n",***r);
}