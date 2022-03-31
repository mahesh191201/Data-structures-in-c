#include <stdio.h>
#include <stdlib.h>

struct CircularQueue
{

    int size;
    int r;
    int f;
    int *arr;
};

int isEmpty(struct CircularQueue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}

int isFull(struct CircularQueue *q)
{
    if ((q->r + 1) % q->size == q->f)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct CircularQueue *q, int val)
{
    if (isFull(q))
    {
        printf("This Queue is full\n");
    }
    else
    {
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = val;
        printf("enqueued the element: %d\n", val);
    }
}

int dequeue(struct CircularQueue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("This Queue is empty\n");
    }
    else
    {
        q->f = (q->f + 1) % q->size;
        a = q->arr[q->f];
    }
    return a;
}
int main()
{
    struct CircularQueue *q = (struct CircularQueue *)malloc(sizeof(struct CircularQueue));
    q->size = 10;
    q->f = q->r = -1;
    q->arr = (int *)malloc(q->size * sizeof(int));

    enqueue(q, 12);
    enqueue(q, 15);
    enqueue(q, 1);
    enqueue(q, 45);
    printf("Dequeuing element %d\n", dequeue(q));
    printf("Dequeuing element %d\n", dequeue(q));
    printf("Dequeuing element %d\n", dequeue(q));
    printf("Dequeuing element %d\n", dequeue(q));
    enqueue(q, 64);
    enqueue(q, 12);
    enqueue(q, 15);
    enqueue(q, 1);
    enqueue(q, 45);
    enqueue(q, 64);
    enqueue(q, 12);
    enqueue(q, 15);
    enqueue(q, 1);
    enqueue(q, 45);
    enqueue(q, 64);
    enqueue(q, 12);
    enqueue(q, 15);
    enqueue(q, 1);
    enqueue(q, 45);

    return 0;
}