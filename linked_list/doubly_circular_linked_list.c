/* C program to traverse, insert and delete the elements of doubly circular linked list */
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

// function to print the elements of circular linked lsit
void printLinkedList(struct Node *head)
{
    struct Node *ptr = head;
    //use do while loop to print the first element and then while loop will work
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
    newNode->prev = third;
    third->next = head;
    head->prev = newNode;
    printLinkedList(head);
}

// function to insert an element at the middle
void insertAtMiddle(struct Node *second, struct Node *third, struct Node *head, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    second->next = newNode;
    newNode->prev = second;
    newNode->next = third;
    third->prev = newNode;
    printLinkedList(head);
}

// function to delete an element at the begining
void deleteAtFirst(struct Node *head, struct Node *second, struct Node *third)
{
    third->next = second;
    second->prev = third;
    second = head;
    printLinkedList(head);
}

// function to delete an element at the end
void deleteAtEnd(struct Node *head, struct Node *second)
{
    second->next = head;
    head->prev = second;
    printLinkedList(head);
}

// function to delete an element at the middle
void deleteAtMiddle(struct Node *head, struct Node *third)
{
    head->next = third;
    third->prev = head;
    printLinkedList(head);
}

int main()
{
    //define pointers of struct Node type
    struct Node *head, *second, *third;
    //dynamic memory allocation
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    //linkage of head to second and third
    head->data = 4;
    head->next = second;
    head->prev = third;
    //linkage of second to third and head
    second->data = 5;
    second->next = third;
    second->prev = head;
    //linkage of third to head and second
    third->data = 6;
    third->next = head;
    third->prev = second;

    // printLinkedList(head);
    insertAtFirst(head, third, 8);
    // insertAtEnd(third, head, 9);
    // insertAtMiddle(second, third, head, 9);
    // deleteAtFirst(head, second, third);
    // deleteAtEnd(head, second);
    // deleteAtMiddle(head, third);

    return 0;
}
