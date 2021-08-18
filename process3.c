#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<sys/wait.h>

int main(void)
{
    printf("hello world (pid:%d)\n", (int) getpid());
    int rc = fork();
    printf("rc pid:%d\n", rc);
    if (rc < 0){
        fprintf(stderr, "fork failed\n");
        exit(1);
    } else if (rc == 0){
        char *myargs[3];
        myargs[0] = strdup("wc"); // program: "wc" (word count)
        myargs[1] = strdup("process3.c"); // argument: file to count
        myargs[2] = NULL;
        execvp("wc", myargs);
        printf("this shouldn't print out");
        printf("hello, I am child (pid:%d)\n", (int) getpid());
    } else {
        int wc = wait(NULL); // wait for child process exec;
        printf("hello, Iam parent of %d (wd:%d) (pid:%d)\n", rc, wc, (int) getpid());
    }
}