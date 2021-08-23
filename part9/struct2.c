#include "stdio.h"
#include "string.h"

struct Teacher {
    int age;
    char sex;
    char name[100];
};

void input(struct Teacher *);

void output(struct Teacher *);

int main(void) {
    struct Teacher str = {24, 'M', "cxq"};
    printf("%d\n", str.age);
    printf("%s\n", str.name);
    input(&str);
    printf("%d\n", str.age);
    printf("%s\n", str.name);
}

void input(struct Teacher *t) {
    t->age = 25;
    strcpy(t->name, "lulin");
}