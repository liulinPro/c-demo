#include "stdio.h"


void fn(int i);

// b存放的是一个垃圾值,(填充值)
int main() {
    int b = 1;
    fn(b);
    printf("%d", b);
}

void fn(int i) {

}






