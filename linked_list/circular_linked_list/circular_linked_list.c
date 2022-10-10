/* C program to traverse, insert and delete the elements of a circular linked list */
#include <stdio.h>
#include <stdlib.h>

// Create a node
struct Node
{
    int data;
    struct Node *next;
};

// function to print the elements of circular linked lsit
void printLinkedList(struct Node *head)
{
    struct Node *ptr = head;
    //use do while loop to print the first element then while loop will work
    do
    {
        printf("%d \n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

// function to insert an element at the begining
void insertAtFirst(struct Node *head, struct Node *third, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    third->next = newNode;
    newNode->next = head;
    head = newNode;
    printLinkedList(head);
}

// function to insert an element at the end
void insertAtEnd(struct Node *third, struct Node *head, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    third->next = newNode;
    newNode->next = head;
    printLinkedList(head);
}
// function to insert an element at the middle
void insertAtMiddle(struct Node *second, struct Node *third, struct Node *head, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    second->next = newNode;
    newNode->next = third;
    printLinkedList(head);
}

// function to delete an element at the begining
void deleteAtFirst(struct Node *head, struct Node *second, struct Node *third)
{
    third->next = second;
    head = second;
    printLinkedList(head);
}

// function to delete an element at the end
void deleteAtEnd(struct Node *head, struct Node *second)
{
    second->next = head;
    printLinkedList(head);
}

// function to delete an element at the middle
void deleteAtMiddle(struct Node *head, struct Node *third)
{
    head->next = third;
    printLinkedList(head);
}

int main()
{
    // declaration of nodes
    struct Node *head, *second, *third;

    // dynamic memory allocation
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // link head to second
    head->data = 4;
    head->next = second;
    // link second to third
    second->data = 5;
    second->next = third;
    // link third to head
    third->data = 6;
    third->next = head;

    // printLinkedList(head);
    // insertAtFirst(head, third, 8);
    // insertAtEnd(third, head, 9);
    // insertAtMiddle(second, third, head, 9);
    // deleteAtFirst(head, second, third);
    // deleteAtEnd(head, second);
    deleteAtMiddle(head, third);

    return 0;
}
