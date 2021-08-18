#include "stdio.h"

int main(void) {
    int i = 10;
    int j = 20;
    int m = 10;
    //error i<j && j=10 表达式不成立
//    if (i < j && j = 10) {
//        printf("%d", m);
//        printf("%d", j);
//    }
// 表达式成立
    if (i<j && (j=10)){
        printf("%d\n",m);
        printf("%d\n",j);
    }
    /* 最佳实现
     * 将常量设置在前面 程序就会运行不起来
     * if (i<j && (10=j)){
        printf("%d\n",m);
        printf("%d\n",j);
    }

     */
    // ;这个是语句，不是表达式
/*    m = if (i < j) && (j = 10);
    printf("%d", m);*/
}
