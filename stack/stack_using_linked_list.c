/* C program to do stack operations like isEmpty(), isFull(), push(), pop(), peek() using linked list */
#include <stdio.h>
#include <stdlib.h>

// Create a node
struct Node
{
    int data;
    struct Node *next;
};

// define a pointer top of struct Node type
struct Node *top = NULL;

// function to print the elements in the stack
void printLinkedList()
{
    while (top != NULL)
    {
        printf("Element: %d\n", top->data);
        top = top->next;
    }
}

// function to check if the stack is empty
int isEmpty(struct Node *top)
{
    /* when top points to null than the stack is empty */
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// function to check if the stack is full
int isFull(struct Node *top)
{
    /* when a pointer fails to get a memory in the heap than the stack is full */
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));

    if (ptr == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// function to add an element in the stack
void push(int data)
{
    /* same as we insert an element at the begining of the linked list */
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = top;
    top = ptr;
}

// function to remove an element from the stack
void pop()
{
    /* same as we delete an element at the begining of the linked list */
    struct Node *ptr;
    ptr = top;
    printf("popped element is %d\n", top->data);
    // top->next = top; //mistake that I have done due which this code was not working 😅
    top = top->next;
    free(ptr);
}

int main()
{
    push(4);
    push(5);
    push(6);
    pop();
    printLinkedList();

    return 0;
}
