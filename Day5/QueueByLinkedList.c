/**
 * @file QueueByLinkedList.c
 * @author Ngo Van Trung (trung2601.it@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-12-05
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

typedef struct Queue
{
    Node *head;
    Node *tail;
} Queue;

Node *makeNode(int value)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

Queue *createQueue()
{
    Queue *newQueue = (Queue *)malloc(sizeof(Queue));
    newQueue->head = newQueue->tail = NULL;
    return newQueue;
}

void put(Queue *q, int value)
{
    Node *temp = makeNode(value);
    if (q->head == NULL)
    {
        q->head = temp;
        q->tail = temp;
    }
    else
    {
        q->tail->next = temp;
        q->tail = temp;
    }
    return;
}

int get(Queue *q)
{
    if (q->head == NULL)
    {
        printf("Queue is empty");
        return -1;
    }
    Node *temp = q->head;
    int data = temp->data;
    q->head = q->head->next;
    if (q->head == NULL)
    {
        q->tail = NULL;
    }
    free(temp);
    return data;
}

int main()
{
    Queue *q = createQueue();
    put(q, 19);
    put(q, 6);
    put(q, 23);
    printf("Get: %d\n", get(q));
    printf("%d\n", q->head->data);
    printf("%d\n", q->tail->data);
    return 0;
}
