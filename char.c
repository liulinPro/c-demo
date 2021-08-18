#include <stdio.h>

/*
   gcc define.c -o define
   ./define a b c d
   argc 表示命令参数总数
   argv 就是具体命令参数
*/
int  main(int argc, char * argv[])
{
    printf("%d\n",argc);
    int i;
    for (i = 0; i < argc; i++)
        printf("Argument %d is %s\n", i, argv[i]);
    return 0;
}