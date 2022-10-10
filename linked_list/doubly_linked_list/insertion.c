/* C program to insert an element at the begining, middle and end of a doubly linked list */
#include <stdio.h>
#include <stdlib.h>

// Create a node
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

// function to print the elements of the doubly linked list
void printList(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d \n", ptr->data);
        ptr = ptr->next;
    }
}

// function to insert an element at the begining
void insertAtFirst(struct Node *head, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
    printList(head);
}

// function to insert an element at the end
void insertAtEnd(struct Node *third, struct Node *head, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    third->next = newNode;
    newNode->prev = third;
    printList(head);
}

// function to insert an element at the middle
void insertAtMiddle(struct Node *ptr, struct Node *ptr2, struct Node *head, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    ptr->next = newNode;
    newNode->prev = ptr;
    newNode->next = ptr2;
    ptr2->prev = newNode;
    printList(head);
}

int main()
{
    // declaration of nodes
    struct Node *head, *second, *third;

    // dynamic memory allocation
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // head node
    head->data = 4;
    head->next = second;
    head->prev = NULL;
    // second node
    second->data = 5;
    second->next = third;
    second->prev = head;
    // third node
    third->data = 6;
    third->next = NULL;
    third->prev = second;

    // printList(head);
    // insertAtFirst(head, 8);
    // insertAtEnd(third, head, 9);
    insertAtMiddle(second, third, head, 8);

    return 0;
}
