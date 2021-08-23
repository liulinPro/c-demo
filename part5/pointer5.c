#include "stdio.h"


void change(int a[5]);

int main(void) {
    int a[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; ++i) {
        printf("%p\n", &a[i]);
    }
    change(a);
    printf("%d", a[1]);

}

void change(int a[5]) {
    a[1] = 4;
}