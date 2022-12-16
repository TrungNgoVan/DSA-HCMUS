/**
 * @file DoublyLinkedList.c
 * @author Ngo Van Trung (trung2601.it@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-12-02
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *previous;
};

struct Node *makeNode(int value)
{
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->previous = NULL;
    newNode->next = NULL;
    return newNode;
}

void display(struct Node *head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main()
{
    struct Node *head, *temp;
    head = makeNode(0);
    for (int i = 1; i < 10; i++)
    {
        temp = makeNode(i);
        head->previous = temp;
        temp->next = head;
        head = temp;
    }
    display(head);
    return 0;
}
