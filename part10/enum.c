#include "stdio.h"

enum WeekDay {
    Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday;
};

int main(void) {
    enum WeekDay day = Tuesday;
    printf("%d", Tuesday);
}