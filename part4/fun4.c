#include "stdio.h"

// 素数
int main(void) {
    int a;
    scanf("%d", &a);
    int val;
    for (int i = 2; i <= a; ++i) {
        if (a % i == 0) {
            val = i;
            break;
        }
    }
    if (a == val) {
        printf("YES");
    } else {
        printf("NO");
    }
}