#include "stdio.h"

int fun(void){
    int i,j,k;
    printf("请输入一个数字,以逗号分隔\n");
    scanf("%d, %d, %d",&i,&j,&k);
    printf("%d\n",i);
    printf("%d\n",j);
    printf("%d\n",k);
    return 0;
}

int main(void){
    int i,j;
    char ch;
    scanf("%d",&i);
    printf("%d\n",i);
    while ((ch=getchar()) != '\n'){
        continue;
    }
    scanf("%d",&j);
    printf("%d\n",j);
}