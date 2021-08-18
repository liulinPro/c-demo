# c

### 编译工具

> 如何编译


- 可以使用 文本编辑器+gcc

[https://gcc.gnu.org/](https://gcc.gnu.org/)

- 编译器 clion

[https://www.jetbrains.com/clion/](https://www.jetbrains.com/clion/)

---

```C
#include <stdio.h>

int main(void){
  printf("%d","helloWorld");
}

```


```C
#include <stdio.h>  

/*  
  gcc char.c -o char ./char a b c d argc 表示命令参数总数 argv 就是具体命令参数
*/  

int main(int argc, char * argv[])  

{  

  printf("%d\n",argc);  

  int i;  

  for (i = 0; i < argc; i++)  

    printf("Argument %d is %s\n", i, argv[i]);  

  return 0;  

}

```


### 数据类型

1个字节=8位

1K = 1024字节

1M = 1024 K

1G = 1024M

整型

&ensp;&ensp;&ensp;&ensp;int 整型 → 2个字节

&ensp;&ensp;&ensp;&ensp;short int  短整型 → 4个字节

&ensp;&ensp;&ensp;&ensp;long int 长整型 → 8个字节

浮点型

&ensp;&ensp;&ensp;&ensp;单精度 float → 4个字节

&ensp;&ensp;&ensp;&ensp;双精度 double → 8个字节

字符

&ensp;&ensp;&ensp;&ensp;char → 1个字节

复合类型数据

结构体

枚举


> 什么是变量


变量的本质是内存中的一段存储空间

> 进制


> 代码规范化


代码成对的敲，缩进(内部代码)，换行

> scanf


```C
#include "stdio.h"

int main(void){
    int i;
    printf("请输入一个数字\n");
    scanf("%d",&i);
    printf("%d\n",i);
}

int fun(void){
    int i,j,k;
    printf("请输入一个数字,以逗号分隔\n");
    scanf("%d, %d, %d",&i,&j,&k);
    printf("%d\n",i);
    printf("%d\n",j);
    printf("%d\n",k);
    return 0;
}

int main(void){
    int i,j;
    char ch;
    scanf("%d",&i);
    printf("%d\n",i);
    while ((ch=getchar()) != '\n'){
        continue;
    }
    scanf("%d",&j);
    printf("%d\n",j);
}

```


### 运算符

![](image/image.png)

```C
#include "stdio.h"

int main(void) {
    int i = 10;
    int j = 20;
    int m = 10;
/* error i<j && j=10 表达式不成立
 * if (i<j && j=10){
        printf("%d",m);
        printf("%d",j);
    }*/
    // 这个是语句，不是表达式
    m = (i < j) && (j = 10);
    printf("%d", m);
}


#include "stdio.h"

int main(void) {
    int i = 10;
    int j = 20;
    int m = 10;
    //error i<j && j=10 表达式不成立
//    if (i < j && j = 10) {
//        printf("%d", m);
//        printf("%d", j);
//    }
// 表达式成立
    if (i<j && (j=10)){
        printf("%d\n",m);
        printf("%d\n",j);
    }
    /* 最佳实现
     * 将常量设置在前面 程序就会运行不起来
     * if (i<j && (10=j)){
        printf("%d\n",m);
        printf("%d\n",j);
    }
    
     */
    // ;这个是语句，不是表达式
/*    m = if (i < j) && (j = 10);
    printf("%d", m);*/
}


```


### 流程控制

if else

for

while

do while

```C
int main(void){
    int i=0;
    int sum =0;
    while (i<=100){
        sum+=i;
        i++;
    }
    printf("%d",sum);
}
int main(void) {
    int sum=0;
    for (int i = 1; i <= 100; ++i) {
        sum += i;
    }
    printf("%d",sum);
}
int main(void) {
    int i = 0;
    int sum = 0;

    do {
        sum += i;
        i++;
    } while (i <= 100);
    printf("%d", sum);
}

```


三目运算符

```C
int main(void) {
    int i;
    i = (3 > 2 ? 5 : 3);
    printf("%d", i);
    i = (13, 12, 23);
    printf("%d", i);
}
```


逗号表达式

break continue return

- break 结束循环

- continue 跳出本次循环

- return 语句返回

- break不能直接用于if else 除非if else内部循环语句

- 多层嵌套，break终止最近的语句

### 数组

```C
#include "stdio.h"

int main(void) {
    int a[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; ++i) {
        printf("%d\n", a[i]);
    }

    //二维数组
    int b[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d\n", b[i][j]);
        }
    }

    int c[5];    
    for (int i = 4; i >= 0; --i) {
        c[i] = a[i];
    }
    for (int i = 0; i < 5; ++i) {
        printf("%d\n", c[i]);
    }
    int len = sizeof(a)/sizeof(int);
    printf("数组长度 %d\n",len);
}

```


### 函数

> 为啥需要函数


- 避免重复操作

- 程序模块化

```C
#include "stdio.h"

// 函数 形参，如果void表示没有形参
void max(int i, int j) {
    if (i > j) {
        printf("%d", i);
    }
}
void min(void){
}

int main(void) {
    int a, b;
    a = 4, b = 3;
    max(a, b);
}
```


```C
#include "stdio.h"

// 函数声明
void f(void);

int main(void){
    f();
}

void f(void){
    printf("helloWorld");
}
```


```C
#include "stdio.h"

void f(void);

void g(void) {
    f();
}

void f(void) {
    printf("liulin");
}

int main(void) {
    g();
}
```


> 提高代码


- 代码可读性

- 代码重用性

### other

> static extern #define


[https://blog.csdn.net/guotianqing/article/details/79828100](https://blog.csdn.net/guotianqing/article/details/79828100)

[https://blog.csdn.net/qq_42379345/article/details/81226476](https://blog.csdn.net/qq_42379345/article/details/81226476)

> 编译多个文件的方法


```C
方法一
// fun.c
#include "stdio.h"

extern int max();

int main(void) {
    int c = max();
    printf("%d", c);
}
// main.c
#include "stdio.h"

extern int max();

int main(void) {
    int c = max();
    printf("%d", c);
}

gcc main.c fun.c -o main

----------------------------------------------------------------------
方法二

// fun.h
int max() {
    int a = 30;
    int b = 20;
    return a > b ? a : b;
}

// main.c
#include "stdio.h"
#include "fun.h"


int main(void) {
    int c = max();
    printf("%d", c);
}

gcc main.c -o main

```


> **C 语言中 include <> 与include "" 的区别?**


- #include < > 引用的是编译器的类库路径里面的头文件。

- #include " " 引用的是你程序目录的相对路径中的头文件，如果在程序目录没有找到引用的头文件则到编译器的类库路径的目录下找该头文件。


