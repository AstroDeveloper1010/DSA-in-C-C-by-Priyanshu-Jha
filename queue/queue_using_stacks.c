/* C program to implement a queue using two stacks */
/*
    we can also implement queue using only one stack by recursion
    I will upload that later
*/

#define N 5 // macro function to define N = 5
#include <stdio.h>

int s1[N], s2[N];
int top1 = -1, top2 = -1, count = 0;

// function to print elements of the queue
void printElement()
{
    for (int i = 0; i <= top1; i++)
    {
        printf("Element: %d\n", s2[i]);
    }
}

// function to add an element in the queue
void enqueue(int data)
{
    if (top1 == (N - 1))
    {
        printf("Queue Overflow \n");
    }
    else
    {
        push1(data);
        count++;
    }
}

// function to remove an element from the queue
void dequeue()
{
    if (top1 == -1)
    {
        printf("Queue is empty \n");
    }
    else
    {
        for (int i = 0; i < count; i++)
        {
            int x = pop1();
            push2(x);
        }
        int y = pop2();
        printf("Dequeued element is %d\n", y);
        count--;
        for (int i = 0; i < count; i++)
        {
            int z = pop2();
            push1(z);
        }
    }
}

// function to add an element to stack 1
void push1(int data)
{
    top1++;
    s1[top1] = data;
}

// function to remove an element at the top from stack 1
int pop1()
{
    return s1[top1--]; // first we have returned the value of s1[top1] and then decremented top1 = top1 - 1
}

// function to add an element to stack 2
void push2(int data)
{
    top2++;
    s2[top2] = data;
}

// function to remove an element at the top from stack
int pop2()
{
    return s2[top2--]; // first we have returned the value of s2[top2] and then decremented top2 = top2 - 1
}

int main()
{
    enqueue(4);
    enqueue(5);
    enqueue(6);
    enqueue(7);
    enqueue(9);
    dequeue();
    dequeue();
    dequeue();
    printElement();

    return 0;
}
