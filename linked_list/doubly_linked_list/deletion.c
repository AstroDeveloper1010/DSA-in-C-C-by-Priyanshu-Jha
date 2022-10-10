/* C program to delete an element at the begining, middle and end of a doubly linked list */
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

// function to delete an element at the begining
void deleteAtFirst(struct Node *head, struct Node *second)
{
    head->next = NULL;
    second->prev = NULL;
    head = second;
    printList(head);
}

// function to delete an element at the end
void deleteAtEnd(struct Node *second, struct Node *head)
{
    second->next = NULL;
    printList(head);
}

// function to delete an element at the middle
void deleteAtMiddle(struct Node *head, struct Node *third)
{
    head->next = third;
    third->prev = head;
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
    // deleteAtFirst(head, second);
    // deleteAtEnd(second, head);
    deleteAtMiddle(head, third);

    return 0;
}
