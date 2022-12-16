/**
 * @file BinaryTree.c
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

typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
} Node;

Node *makeNode(int value)
{
    Node *newNode;
    newNode = (Node *)malloc(sizeof(Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void display(Node *head)
{
    if (head != NULL)
    {
        display(head->left);
        printf("%d ", head->data);
        display(head->right);
    }
}

Node *searchTree(Node *root, int target)
{
    if (root == NULL)
        return NULL;
    if (root->data == target)
        return root;
    else if (root->data > target)
        return searchTree(root->left, target);
    else
        return searchTree(root->right, target);
}

int main()
{
    Node *head = makeNode(50);
    head->left = makeNode(25);
    head->right = makeNode(75);
    head->left->right = makeNode(33);
    // display(head);
    Node *search = searchTree(head, 33);
    int res = search != NULL ? search->data : -1;
    printf("%d\n", res);
    free(head);
    return 0;
}
