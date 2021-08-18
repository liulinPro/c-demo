#include "stdio.h"

int main(void) {
    int score;
    printf("请输入分数\n");
    scanf("%d", &score);
    if (score < 60) {
        printf("不及格");
    } else if (score >= 60) {
        printf("及格");
    }
}
