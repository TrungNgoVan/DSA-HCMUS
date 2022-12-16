/**
 * @file LinkedList.c
 * @author Ngo Van Trung (trung2601.it@gmail.com)
 * @brief Implement data structure Linked list
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
    int data;          // Data of curren node
    struct Node *next; // Contain address of next node
};

// Function create new node
struct Node *makeNode(int value)
{
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Function print linked list
void displayList(struct Node *head)
{
    while (head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Function insert new node to linked list
void insert(struct Node **head, int value, int position)
{
    // Case insert in head of linked list
    if (position - 1 == 0)
    {
        struct Node *newNode = makeNode(value);
        newNode->next = *head;
        *head = newNode;
        return;
    }

    // Other case
    int count = 0;
    struct Node *temp = *head;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    struct Node *newNode = makeNode(value);
    newNode->next = temp->next;
    temp->next = newNode;
    return;
}

void insertTail(struct Node **head, int data)
{
    if (*head == NULL || (*head)->next == NULL)
    {
        struct Node *newNode = makeNode(data);
        if (*head == NULL)
            *head = newNode;
        else
        {
            (*head)->next = newNode;
        }
    }
    else
    {
        insertTail(&((*head)->next), data);
    }
}

// Function search element by data in linked list
int search(struct Node *head, int value)
{
    int res = 0;
    while (head != NULL)
    {
        if (head->data == value)
            return res;
        res++;
        head = head->next;
    }
    return -1;
}

// Function to delete data by position of linked list
void delete(struct Node *head, int position)
{
    int index = 0;
    while (index != position - 1)
    {
        head = head->next;
        index++;
    }
    head->next = head->next->next;
    return;
}

int main()
{
    struct Node *head, *temp = head;
    head = NULL; // Define node head is NULL
    // Input data to linked list
    for (int i = 0; i < 10; i++)
    {
        temp = makeNode(i);
        temp->next = head;
        head = temp;
    }
    // Demo methods
    displayList(head);
    insert(&head, 13, 3);
    displayList(head);
    printf("Search: %d\n", search(head, 4));
    delete (head, 5);
    displayList(head);
    insertTail(&head, 100);
    displayList(head);
    return 0;
}
