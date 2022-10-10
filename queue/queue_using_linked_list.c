/* C program to implement queue using linked list */
#include <stdio.h>
#include <stdlib.h>

// Create a node
struct Node
{
    int data;
    struct Node *next;
};

// define two pointers front (f) and rear (r) and initially assign f = r = NULL
struct Node *f = NULL;
struct Node *r = NULL;

// function to enqueue an element in the queue
/*
    1) same as we insert an element in the linked list
    2) create a pointer 'n' of struct node type
    3) if 'n' do not get a space in the heap it means that the queue is full
    4) if 'f' is NULL then f = r = n
    4) we assign the data in *n and n->next = NULL
    5) also r->next = n and r = n

*/
void enqueue(int data)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL)
    {
        printf("Queue is full \n");
    }
    else
    {
        n->data = data;
        n->next = NULL;
        if (f == NULL)
        {
            f = n;
            r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
}

// function to dequeue an element from the queue
/*
    1) if f = NULL then the queue is empty
    2) create a pointer 'ptr' of struct Node type
    3) assign ptr = f and update f = f->next
    4) free(ptr) to free the unused space in the heap
*/
void dequeue()
{
    struct Node *ptr;
    if (f == NULL)
    {
        printf("Queue is empty \n");
    }
    else
    {
        ptr = f;
        f = f->next;
        printf("Dequeued element is %d\n", ptr->data);
        free(ptr);
    }
}

// function to print the elements of the queue
void printQueue(struct Node *head)
{
    if (head == NULL)
    {
        printf("Queue is empty %d\n");
    }
    else
    {
        while (head != NULL)
        {
            printf("Element: %d\n", head->data);
            head = head->next;
        }
    }
}

int main()
{
    enqueue(4);
    enqueue(5);
    enqueue(6);
    dequeue();
    dequeue();
    dequeue();
    printQueue(f);

    return 0;
}
