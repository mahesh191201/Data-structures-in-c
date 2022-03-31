#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

void enqueue(int val)
{
    struct Node *temp;
    temp = (struct Node *)malloc(sizeof(struct Node));

    temp->data = val;
    temp->next = NULL;
    if (front == NULL && rear == NULL)
    {
        front = rear = temp;
        return;
    }
    rear->next = temp;
    rear = temp;
}

int dequeue()
{
    struct Node *temp = front;
    if (front == NULL)
    {
        printf("The queue is empty\n");
    }
    else
    {
        front = front->next;
    }
    free(temp);
    return;
}

void display()
{
    struct Node *temp = front;
    while (temp != NULL)
    {
        printf("The elements are %d\n", temp->data);
        temp = temp->next;
    }
}

int main()
{

    enqueue(0);
    enqueue(2);
    enqueue(4);
    enqueue(16);
    enqueue(25);
    enqueue(36);
    enqueue(49);
    enqueue(64);
    enqueue(81);
    enqueue(100);
    enqueue(121);

    dequeue();
    dequeue();
    display();

    return 0;
}