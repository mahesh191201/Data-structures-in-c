#include <stdio.h>
#include <stdlib.h>

struct node
{

    int data;
    struct node *next;
};

struct node *top = 0;

void push(int x)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = top;
    top = newnode;
}

void display()
{
    struct node *temp;
    if (temp == NULL)
    {
        printf("stack underflow");
    }
    else
    {
        while (temp != 0)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}

void peek()
{
    if (top == NULL)
    {
        printf("stack underflow\n");
    }
    else
    {
        printf("The top element is %d\n", top->data);
    }
}

int pop()
{
    struct node *temp;
    temp = top;
    if (temp == 0)
    {
        printf("stack underflow\n");
    }
    else
    {

        printf("The popped element is: %d\n", temp->data);
        temp = temp->next;
        free(temp);
    }
}

int main()
{
    
    push(10);
    push(4);
    push(9);
    push(1);
    
    display();
   
    return 0;
}
