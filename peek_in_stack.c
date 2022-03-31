#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;qu
    int *arr;
};

int isEmpty(struct stack *sp)
{

    if (sp->top == -1)
    {
        return 1;

    } // Yes--->1    no---->0
    else
    {
        return 0;
    }
}
int isFull(struct stack *sp)
{

    if (sp->top == sp->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *sp, int val)
{
    if (isFull(sp))
    {
        printf("stack overflow\n");
    }
    else
    {
        sp->top++;
        sp->arr[sp->top] = val;
        printf("%d is pushed into the stack\n", val);
    }
}
int pop(struct stack *sp)
{
    if (isEmpty(sp))
    {
        printf("stack underflow\n");

        return -1;
    }
    else
    {
        int val = sp->arr[sp->top];
        sp->top = sp->top - 1;
        printf("%d is popped out of the stack\n", val);
    }
}

int peek(struct stack *sp)
{
    if (isEmpty(sp))
    {
        printf("stack underflow\n");
    }
    else
    {
        return sp->arr[sp->top];
    }
}

int display(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("stack underflow\n");
    }
    else
    {
        do
        {
             printf("%d\n", ptr->arr[ptr->top]);
            ptr->top=ptr->top++;
        } while (ptr->top != ptr->size - 1);
        
    
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
    // printf("%d\n", isEmpty(sp));
    //  printf("%d\n", isFull(sp));
    //  printf("%d\n", isEmpty(sp));
    //  printf("%d\n", isFull(sp));

    push(sp, 1);
    push(sp, 4);
    push(sp, 9);
    push(sp, 16);
    push(sp, 25);
    
    display(sp);

    return 0;
}