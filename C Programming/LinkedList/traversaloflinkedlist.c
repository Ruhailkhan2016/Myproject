#include <stdio.h>
#include <stdlib.h>
struct Node
{
    //A simple C program for traversal of a linked list
    int data;
    struct Node *next;
};

void printlist(struct Node *n)
{
    while (n != NULL)
    {
        printf(" %d\n", n->data);
        n = n->next;
    }
}

int main()
{
    // here we take three node
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;

    // alocate these three node in heap memory
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;      // assigning the data in first node
    head->next = second; // linked first node with second node

    second->data = 2;   // assigning the data in second node
    second->next = third; // linked second node with third node

    third->data = 3;
    third->next = NULL; // linked list is terminated here because third

    printlist(head);

    return 0;
}