#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};
int isFull(struct queue *q)
{
    if (q->r == q->size - 1)
    {
        printf("queue overflow");
    }
}

int isEmpty(struct queue *q)
{
    if (q->r == q->f)
    {
        printf("queue underflow");
    }
}

void enqueue(struct queue *q, int val)
{
    if (!(isFull(q)))
    {
        q->r++;
        q->arr[q->r] = val;
        printf("%d is enqueued\n", val);
    }
}
int dequeue(struct queue *q)
{
    int a = -1;
    if (!(isEmpty(q)))
    {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}

int main()
{
    struct queue *q;
    q = (struct queue *)malloc(sizeof(struct queue));
    q->size = 10;
    q->r = q->f = -1;
    q->arr = (int *)malloc(q->size * sizeof(int));

    enqueue(q, 1);
  
    return 0;
}