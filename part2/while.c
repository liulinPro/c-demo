#include "stdio.h"

int main(void){
    int i=0;
    int sum =0;
    while (i<=100){
        sum+=i;
        i++;
    }
    printf("%d",sum);
}