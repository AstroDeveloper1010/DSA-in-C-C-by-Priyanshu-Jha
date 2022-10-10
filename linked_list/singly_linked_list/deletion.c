/* C program to delete a node at the begining, middle and end of a linked list */
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

// function to delete an element at the begining of the linked list and then print the elements
void deleteAtFirst(struct Node *head, struct Node *second)
{
    head = second;
    printLinkedList(head);
}

// function to delete an element at the end of the linked list and then print the elements
void deleteAtEnd(struct Node *second, struct Node *head)
{
    second->next = NULL;
    printLinkedList(head);
}

// function to delete an element at the middle of the linked list and then print the elements
void deleteAtMiddle(struct Node *head, struct Node *third)
{
    head->next = third;
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
    // deleteAtFirst(head, second); //calling deleteAtFirst() function
    // deleteAtEnd(second, head); //calling deleteAtEnd() function
    deleteAtMiddle(head, third); // calling deleteAtMiddle() function

    return 0;
}
