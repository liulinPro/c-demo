#include "stdio.h"

struct Student {
    int age;
    char sex;
    char name[100];
};

int main() {
    struct Student st = {80, 'N', "liulin"};
    struct Student *st2 = &st;
    printf("%d", st.age);
    printf("%d", st.sex);
    printf("%s", st.name);
}
