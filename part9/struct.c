#include "stdio.h"

int main() {
    struct Student {
        int age;
        float score;
    };

    struct Student st = {80, 66.6};
    struct Student st2;
    st2.age = 80;
    st2.score = 77.7;
    struct Student *p = &st2;
    p->age = 80; // (*P).age
    printf("%f", st.score);
    printf("%d", st.age);
}
