#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void Traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct node *inserthead(struct node *head, int data)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));

    ptr->next = head;
    ptr->data = data;
    return ptr;
}

int main()

{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    head->data = 4;
    head->next = second;

    second->data = 9;
    second->next = third;

    third->data = 16;
    third->next = fourth;

    fourth->data = 25;
    fourth->next = NULL;

    Traversal(head);
    head = inserthead(head, 17);
    printf("\n");
        Traversal(head);

    return 0;
}