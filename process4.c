#include<unistd.h>
#include<string.h>
#include<fcntl.h>
#include<sys/wait.h>
#include<stdlib.h>
#include <string.h>
#include<stdio.h>

int main(void)
{
    printf("hello world (pid:%d)\n", (int) getpid());
    int rc = fork();
    printf("rc pid:%d\n", rc);
    if (rc < 0){
        fprintf(stderr, "fork failed\n");
        exit(1);
    } else if (rc == 0){
        close(STDOUT_FILENO);
        open("./p4.output", O_CREAT|O_WRONLY|O_TRUNC, S_IRWXU);
        char *myargs[3];
        myargs[0] = strdup("wc"); // program: "wc" (word count)
        myargs[1] = strdup("process4.c"); // argument: file to count
        myargs[2] = NULL;
        execvp( myargs[0], myargs);
        printf("this shouldn't print out");
        printf("hello, I am child (pid:%d)\n", (int) getpid());
    } else {
        int wc = wait(NULL); // wait for child process exec;
        printf("hello, Iam parent of %d (wd:%d) (pid:%d)\n", rc, wc, (int) getpid());
    }
}