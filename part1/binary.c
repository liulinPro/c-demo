#include "stdio.h"

/*
 * 8进制
 * 16进制
 */
int main(void) {
    int i = 0X15;
    int j = 015;
    printf("%d\n", i);
    printf("%d\n", j);
    printf("%s\n", "helloWorld");
    printf("%#X\n",i);
    printf("%o\n",i);
}