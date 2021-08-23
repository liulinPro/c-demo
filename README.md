### 工具

> 如何编译

- 可以使用 文本编辑器+gcc



- 编辑器 clion



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

int 整型 → 2个字节

short int  短整型 → 4个字节

long int 长整型 → 8个字节

浮点型

单精度 float → 4个字节

双精度 double → 8个字节

字符

char → 1个字节

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

![](https://secure.wostatic.cn/static/vmtTzGCEFmSUzhRbxZPfym/image.png)

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

### 指针

![](https://secure.wostatic.cn/static/aXN8pirPHVzoMkigcAH7dr/image.png)

![](https://secure.wostatic.cn/static/gySexksRpH5HDueagTpywn/image.png)

![](https://secure.wostatic.cn/static/jEfmMcFgTQqkKTYZsydPn3/image.png)

```C
// 指针问题
int main(void) {
    int *i;
    int a;
    i = &a;
    printf("%d", *i);
}
/*
不会。a 是明确类型的栈内存，i 此时与 &a 指向同一块内存。如果 你这时 用 *i = 1000; 。也是对的，a 值被改
*/

int main(void) {
    int *i;
    int *j;
    *i = *j;
}
/*
*i 是会的，因为这是操作内存，非法内存
*/

int main(void) {
    int *i;
    int *j;
    i = j; 
}
/*
不会报错 i j是变量
*/

```

```C
#include "stdio.h"

void change(int *a, int *b);

void change1(int *a, int *b);

void change2(int a, int b);


int main(void) {
    int a, b;
    a = 3, b = 4;
    printf("%d %d\n", a, b);
    change(&a, &b);
    printf("%d %d\n", a, b);
    printf("\n");
    printf("%d %d\n", a, b);
    change2(a, b);
    printf("%d %d\n", a, b);
    printf("\n");
    printf("%d %d\n", a, b);
    change1(&a, &b);
    printf("%d %d\n", a, b);
}

// 未成功
void change2(int a, int b) {
    printf("fun===============\n");
    int t;
    t = a;
    a = b;
    b = t;
    printf("fun===============\n");
}

// 未成功
void change1(int *a, int *b) {
    printf("fun===============\n");
    int *t;
    t = a;
    a = b;
    b = t;
    printf("fun===============\n");
}

// 成功更换
void change(int *a, int *b) {
    printf("fun===============\n");
    int t;
    t = *a;
    *a = *b;
    *b = t;
    printf("fun===============\n");
} 
```

> 指针和数组

```C
#include "stdio.h"

void f(int *pArr, int len);

int main(void) {
    int a[5] = {1, 2, 3, 4, 5};
    f(a, 5);
    int b[6] = {1, 2, 3, 4, 5, 6};
    f(b, 6);
}

void f(int *pArr, int len) {
    for (int i = 0; i < len; ++i) {
        printf("%d\n", *(pArr + i));
    }
}
```

> 动态内存分配

传统数据 （静态数组）

动态数组

- malloc

- free

- reallocf

动态内存和动态内存

多级指针

跨函数使用内存

```C
#include "stdio.h"
#include "mm_malloc.h"

void fun1(int *p) {
    p = (int *) malloc(sizeof(int));
}

void fun2(int **q) {
    *p = (int *) malloc(sizeof(int));
}

void fun3(int *p) {
    int s;
    p = &s;
}

void fun4(int **p) {
    int s;
    *q = &s;
}

int main() {
    int *p;
    fun1(p); //错误
    fun2(&p);//正确
    fun3(p); //错误
    fun4(&p); //错误
}


```

![](https://secure.wostatic.cn/static/vLysZmUQPBC6TAEB5Z8sf5/image.png)

### 结构体

```C
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
    p->age; // (*P).age
    printf("%d", st2.age)
}
```

```C
#include "stdio.h"

typedef struct Student {
    int number;
} S, *pS;

int main(void) {
    S s1;  //struct Student s1
    pS sp; // struct Student * sp;
    s1.number = 1;
    sp = &s1;
    printf("%d\n", s1.number);
    printf("%d", sp->number);
    return 0;
}
```

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

> gcc gdb(程序调试)

mac下gdb不可用时 参考如下·

[https://ifmet.cn/posts/a75b2ced/](https://ifmet.cn/posts/a75b2ced/)

[https://zhuanlan.zhihu.com/p/68398728](https://zhuanlan.zhihu.com/p/68398728)

[https://gist.github.com/mike-myers-tob/9a6013124bad7ff074d3297db2c98247](https://gist.github.com/mike-myers-tob/9a6013124bad7ff074d3297db2c98247)

> c语言字符串问题



```C
#include <stdio.h>

int main(void) {
    char *str;
    str = "abc"; // 把这个字符串的首地址赋给 str
    for (size_t i = 0; i < 3; i++) {
        printf("%c\n", str[i]);
    }
    for (size_t i = 0; i < 3; i++) {
        str[i] = 'i'; // 错误
    }
    return 0;
}
```

> 进制

> 补码

- 原码
  也叫符号-绝对值码
  最高位0表示正1表示负，其余二进制位是该数字的绝对值的二进制位
  原码简单易懂
  加减运算复杂
  存在加减乘除四种运算， 增加了CPU的复杂度
  零的表示不唯一

- 反码
  反码运算不便，也没有在计算机中应用

- 移码
  移码表示数值平移n位，n称为移码量
  移码主要用于浮点数的阶码的存储

- 补码
  已知十进制求二进制
  求正整数的二进制
  除2取余，直至商为零，余数倒叙排序
  求负整数的二进制
  先求与该负数相对应的正整数的二进制代码，然后将
  所有位取反，末尾加1，不够位数时，左边补1
  求零的二进制
  全是零
  已知二进制求十进制
  如果首位是0，则表明是正整数，按普通方法来求
  如果首位是1，则表明是负整数
  将所有位取反，末尾加1，所得数字就是该负数的绝对值
  如果全是零，则对应的十进制数字就是零

> 位运算

