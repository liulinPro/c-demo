#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(void)
{
    printf("hello world (pid:%d)\n", (int) getpid());
    int rc = fork();
    printf("rc pid:%d\n", rc);
    if (rc < 0){
        fprintf(stderr, "fork failed\n");
        exit(1);
    } else if (rc == 0){
        printf("hello, I am child (pid:%d)\n", (int) getpid());
    } else {
        printf("hello, Iam parent of %d (pid:%d)\n", rc, (int) getpid());
    }
}