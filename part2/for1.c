#include "stdio.h"

int main(void){
    for (int i = 0; i < 100; ++i) {
        if (i==3){
            break;
        }
        printf("%d",i);
    }
}