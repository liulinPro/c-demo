#include "stdio.h"
#include "mm_malloc.h"

void f(int *p);

int main() {
    int *p = (int *) malloc(sizeof(int));
    *p =10;
//    printf("%p\n",p);
//    printf("%p\n",&p);
//    printf("%d\n",*p);
//    printf("===================\n");
    //f(p);
    printf("%d\n",*p);
    //free(p);
    printf("%d\n",*p);

}

void f(int *p){
    printf("%p\n",p);
    printf("%p\n",&p);
    *p = 200;
}