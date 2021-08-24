#include "stdio.h"
#include "mm_malloc.h"

typedef struct Student {
    int number;
    int age;
} S, *pS;

pS create(void);

int main(void) {
    S s1;  //struct Student s1
    pS sp; // struct Student * sp;
    s1.number = 1;
    sp = &s1;
    printf("%d\n", s1.number);
    printf("%d\n", sp->number);
    pS p = create();
    printf("%d", p->number);
    return 0;
}

pS create(void) {
    printf("%ld\n", sizeof(S));
    pS sp = (pS) malloc(sizeof(S));
    sp->number = 1;
    return sp;
}