#include "stdio.h"
#include "mm_malloc.h"

void fun1(int *p) {
    p = (int *) malloc(sizeof(int));
}

void fun2(int **q) {
    *p = (int *) malloc(sizeof(int));
}

void fun3(int *p) {
    int s;
    p = &s;
}

void fun4(int **p) {
    int s;
    *q = &s;
}

int main() {
    int *p;
    fun1(p); //错误
    fun2(&p);//正确
    fun3(p); //错误
    fun4(&p); //错误
}

