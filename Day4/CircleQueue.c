#include <stdio.h>
#include <math.h>
#define MAX 10

struct CircleQueue
{
    int data[MAX];
    int head;
    int tail;
};

void init(struct CircleQueue *queue)
{
    queue->head = queue->tail = -1;
}

void put(struct CircleQueue *queue, int value)
{
    if (queue->head == -1 && queue->tail == -1)
    {
        queue->head = 0;
        queue->tail = 0;
        queue->data[queue->tail] = value;
    }
    else
    {
        queue->tail = (queue->tail + 1) % MAX;
        queue->data[queue->tail] = value;
    }
}

int get(struct CircleQueue *queue)
{
    int res = queue->data[queue->head];
    if (queue->head == queue->tail)
    {
        queue->head = -1;
        queue->tail = -1;
    }
    else
    {
        queue->head = (queue->head + 1) % MAX;
    }
    return res;
}

int isFull(struct CircleQueue *queue)
{
    return 1 ? (queue->tail + 1) % MAX == queue->head : 0;
}

int isEmpty(struct CircleQueue *queue)
{
    return 1 ? queue->head == -1 && queue->tail == -1 : 0;
}

int size(struct CircleQueue *queue)
{
    return abs(queue->tail + MAX - queue->head + MAX) % MAX + 1;
}

int main()
{
    struct CircleQueue queue;
    init(&queue);
    printf("Run put \n");
    for (int i = 0; i <= MAX * 2 ; i++)
    {
        if (!isFull(&queue))
        {
            put(&queue, i);
            printf("Size: %d ", size(&queue));
            printf("Put: %d \n", i);
        }
        else
        {
            printf("Queue is full \n");
        }
    }
    printf("Run get \n");
    for (int i = 0; i <= MAX / 2; i++)
    {
        if (!isEmpty(&queue))
        {
            printf("Size: %d ", size(&queue));
            printf("Get: %d \n", get(&queue));
        }
        else
        {
            printf("Queue is empty \n");
        }
    }
    printf("Run put \n");
    for (int i = 0; i <= MAX; i++)
    {
        if (!isFull(&queue))
        {
            put(&queue, i);
            printf("Size: %d ", size(&queue));
            printf("Put: %d \n", i);
        }
        else
        {
            printf("Queue is full \n");
        }
    }
    return 0;
}
