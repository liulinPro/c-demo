#include "stdio.h"

void change(int *a, int *b);

void change1(int *a, int *b);

void change2(int a, int b);


int main(void) {
    int a, b;
    a = 3, b = 4;
    printf("%d %d\n", a, b);
    change(&a, &b);
    printf("%d %d\n", a, b);
    printf("\n");
    printf("%d %d\n", a, b);
    change2(a, b);
    printf("%d %d\n", a, b);
    printf("\n");
    printf("%d %d\n", a, b);
    change1(&a, &b);
    printf("%d %d\n", a, b);
}

// 未成功
void change2(int a, int b) {
    printf("fun===============\n");
    int t;
    t = a;
    a = b;
    b = t;
    printf("fun===============\n");
}

// 未成功
void change1(int *a, int *b) {
    printf("fun===============\n");
    int *t;
    t = a;
    a = b;
    b = t;
    printf("fun===============\n");
}

// 成功更换
void change(int *a, int *b) {
    printf("fun===============\n");
    int t;
    t = *a;
    *a = *b;
    *b = t;
    printf("fun===============\n");
}