#include <stdio.h>

int main() {
    int sum = 103;  //总数
    int count = 7;  //数目
    double average;  //平均数
    average = (double) sum / count;
    printf("Average is %lf!\n", average);
    return 0;
}


int main1(){
    double total = 400.8;  //总价
    int count = 5;  //数目
    double unit;  //单价
    int total_int = (int)total;
    unit = total / count;
    printf("total=%lf, total_int=%d, unit=%lf\n", total, total_int, unit);
    return 0;
}