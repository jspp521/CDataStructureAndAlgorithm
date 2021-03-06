#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

/**
 * 有序栈测试
 */
int main(int argc, char const *argv[])
{
    Stack s;
    SElemTpye e;
    int i;
    initStack(&s);
    for (i = 1; i < 5; ++i)
    {
        scanf("%d", &e);
        if(push(&s, e) == OK)
            printf("push %d success\n", e);
    }
    printf("traverse this stack:", e);
    stackTraverse(&s, printData);
    printf("\n", e);
    for (i = 1; i < 5; ++i)
    {
        if(pop(&s, &e) == OK)
            printf("pop %d success\n", e);
    }
    destroyStack(&s);
}
