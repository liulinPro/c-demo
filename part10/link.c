# include <stdio.h>
# include <mm_malloc.h>
# include <stdlib.h>

struct Node {
    int data;
    struct Node *pNext;
};

struct Node *create_list(void);

void traverse_list(struct Node *);

int get_link_data(struct Node *, int reverseNum);

int main(void) {
    struct Node *pHead = NULL;

    pHead = create_list();
    traverse_list(pHead);
    int reverseData = get_link_data(pHead, 1);
    printf("%d", reverseData);

    return 0;
}

struct Node *create_list(void) {
    int len;
    int i;
    int val;


    struct Node *pHead = (struct Node *) malloc(sizeof(struct Node));
    if (NULL == pHead) {
        printf("·§°Ü, ³ÌÐòÖÕÖ¹!\n");
        exit(-1);
    }
    // 链表头
    struct Node *pTail = pHead;
    pTail->pNext = NULL;

    printf("请输入链表长度: len = ");
    scanf("%d", &len);

    for (i = 0; i < len; ++i) {
        printf("请输入%d元素: ", i + 1);
        scanf("%d", &val);

        struct Node *pNew = (struct Node *) malloc(sizeof(struct Node));
        if (NULL == pNew) {
            exit(-1);  //ÖÕÖ¹³ÌÐò
        }
        pNew->data = val;
        pTail->pNext = pNew;
        pNew->pNext = NULL;
        // 更新链表尾
        pTail = pNew;
    }

    return pHead;
}

void traverse_list(struct Node *pHead) {
    struct Node *p = pHead->pNext;

    while (NULL != p) {
        printf("%d  ", p->data);
        p = p->pNext;
    }
    printf("\n");

    return;
}

int get_link_data(struct Node *pHead, int reverseNum) {
    struct Node *p = pHead;
    struct Node *h = NULL;
    for (int i = 0; i < reverseNum - 1; ++i) {
        if (NULL != p->pNext) {
            p = p->pNext;
        }
    }
    h = pHead;
    while (NULL != p->pNext) {
        p = p->pNext;
        h = h->pNext;
    }
    return h->data;
}