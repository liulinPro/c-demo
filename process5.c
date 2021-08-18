#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
    int x;
    int rc = fork();
    if (rc < 0) {
        fprintf(stderr, "fork failed\n");
        exit(1);
    } else if (rc == 0) {
        x=100;
        printf("child:x = %d\n", x);
    } else {
        //x = 100;
        printf("rc:%d pid:%d\n", rc, (int) getpid());
    }
    return 0;
}
