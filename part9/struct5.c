#include "stdio.h"

typedef struct Student {
    int number;
} S, *pS;

int main(void) {
    S s1;  //struct Student s1
    pS sp; // struct Student * sp;
    s1.number = 1;
    sp = &s1;
    printf("%d\n", s1.number);
    printf("%d", sp->number);
    return 0;
}