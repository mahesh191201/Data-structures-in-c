#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{

    if (ptr->top == -1)
    {
        return 1;

    } // Yes--->1    no---->0
    else
    {
        return 0;
    }
}
int isFull(struct stack *ptr)
{

    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("stack overflow\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("stack underflow\n");

        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top = ptr->top - 1;
        return val;
    }
}

int display(struct stack *sp)
{

    while (top != size - 1)
    {
        printf("%d", arr[sp->top]);
        top++;
    }
}

int main()
{
    struct stack *sp;
    sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("stack is running\n");
    printf("%d\n", isEmpty(sp));
    printf("%d\n", isFull(sp));
    push(sp, 1);
    push(sp, 4);
    push(sp, 9);
    push(sp, 16);
    push(sp, 25);
    push(sp, 36);
    push(sp, 49);
    push(sp, 64);
    push(sp, 81);
    push(sp, 100);
    printf("%d\n", isEmpty(sp));
    printf("%d\n", isFull(sp));

    printf("The value popped is %d\n", pop(sp));

    return 0;
}