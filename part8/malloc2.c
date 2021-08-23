# include <stdio.h>
# include <mm_malloc.h>

int main() {
    /*
     如果每个int占4个字节的话，则本数组总共包含有20个字节，每一个int变量占用了4个字节；
    */
    int a[5];

    int *parr;
    int len;

    printf("%p",parr);

    printf("please input the length of array: ");
    scanf(" %d", &len);

    /*
     本行动态地构造了一个一维数组，该数组的数组名是parr（但输出时可以用别的名字），
     该一维数组的长度是len，该数组的每个元素是int类型（因为malloc函数前面的 int* 决定了
     它返回的地址即动态空间第一个字符的地址是整型的int，该语句类似于 int parr[len];
     */
    parr = (int *) malloc(sizeof(int) * len);

    printf("please input the elements of array: \n");
    for (int i = 0; i < len; i++) {
        printf("arr[%d]=", i);
        scanf("%d", parr + i);
    }

    //扩充或是缩小动态内存
    //如果动态内存被缩小，则地址靠在后面的数据将会丢失

    reallocf(parr, sizeof(int) * (len - 1));

    printf("print the array? y/n");
    getchar();
    if (getchar() == 'y') {
        for (int i = 0; i < len; i++) {
            printf("array[%d]=%d\n", i, parr[i]);
            printf("array[%d]=%d\n", i, *(parr+i));
        }
    }

    //释放数组所占的堆内存
    //free(parr);

    return 0;
}