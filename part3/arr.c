#include "stdio.h"

int main(void) {
    int a[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; ++i) {
        printf("%d\n", a[i]);
    }

    //二维数组
    int b[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d\n", b[i][j]);
        }
    }

    int c[5];
    for (int i = 4; i >= 0; --i) {
        c[i] = a[i];
    }
    for (int i = 0; i < 5; ++i) {
        printf("%d\n", c[i]);
    }
    printf("%ld\n",sizeof(a));
    printf("%ld\n",sizeof(int));
    int len = sizeof(a)/sizeof(int);
    printf("数组长度 %d\n",len);
}