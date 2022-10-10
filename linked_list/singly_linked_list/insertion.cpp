/* C program to insert a node at the begining, middle and end of a linked list */
#include <stdio.h>
#include <stdlib.h>

// Create a node
struct Node
{
    int data;
    struct Node *next;
};

// function to print the elements of the linked list
void printLinkedList(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d \n", ptr->data);
        ptr = ptr->next;
    }
}

// function to add an element at the begining of the linked list and then print the elements
void insertAtFirst(struct Node *ptr, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = ptr;
    ptr = newNode;
    printLinkedList(ptr);
}

// function to add an element at the end of the linked list and then print the elements
void insertAtEnd(struct Node *ptr, struct Node *ptr2, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    ptr->next = newNode;
    newNode->next = NULL;
    printLinkedList(ptr2);
}

// function to add an element at the middle of the linked list and then print the elements
void insertAtMiddle(struct Node *ptr2, struct Node *ptr3, struct Node *head, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    ptr2->next = newNode;
    newNode->next = ptr3;
    printLinkedList(head);
}

int main()
{
    struct Node *head, *second, *third; // declaring the pointers of struct Node type
    // dynamic memory allocation
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // linkage of head to second
    head->data = 4;
    head->next = second;
    // linkage of second to third
    second->data = 5;
    second->next = third;
    // linkage of third to NULL
    third->data = 6;
    third->next = NULL;

    // printLinkedList(head); //calling printLinkedList() function
    // insertAtFirst(head, 8); //calling insertAtFirst() function
    // insertAtEnd(third, head, 9); //calling insertAtEnd() function
    insertAtMiddle(second, third, head, 8); // calling insertAtMiddle() function

    return 0;
}
