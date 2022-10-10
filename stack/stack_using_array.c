/* C program to implement a stack using an array */

#define N 5 // macro function to define the size of N
#include <stdio.h>

int stack[N]; // declaration of stack
int top = -1; // initialise top = -1

// function to add an element to the stack
void push(int data)
{
    if (top == (N - 1))
    {
        printf("%d overflow");
    }
    else
    {
        top++;
        stack[top] = data;
    }
}

// function to remove an element from the stack
void pop()
{
    if (top == -1)
    {
        printf("%d underflow");
    }
    else
    {
        top--;
    }
}

// function to print the element at top in the stack
void peek()
{
    int a;
    if (top == -1)
    {
        printf("%d underflow");
    }
    else
    {
        a = stack[top];
        printf("%d The element at top is \n", a);
    }
}

// function to check if the stack is empty
int isEmpty(int top)
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// function to check if the stack is full
int isFull(int top)
{
    if (top == (N - 1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// function to display the elements of the stack
void display()
{
    for (int i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }
}

int main()
{
    push(4);
    push(5);
    push(6);
    push(7);
    pop();
    peek();
    display();

    return 0;
}
