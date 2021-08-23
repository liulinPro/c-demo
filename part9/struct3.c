#include <stdio.h>

int main(void) {
    char *str; 
    str = "abc"; // 把这个字符串的首地址赋给 str
    for (size_t i = 0; i < 3; i++) {
        printf("%c\n", str[i]);
    }
    str[0] = '1';
    printf("%s", str);
//    for (size_t i = 0; i < 1; i++) {
//        str[i] = 'i'; // 错误
//    }
    return 0;
}