/* C program to implement a queue using an array */
#define N 5
#include <stdio.h>

int f, r, data, index = 0, arr[N];
f = -1; // when queue is empty
r = -1; // when queue is empty
/*
    f = front
    r = rear
    array of size N = 5

    when an element is enqueued then set f = 0 for the first element and set r = r + 1 and when dequeued then set f = f + 1
*/

int isEmpty()
{
    if (f = -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull()
{
    if (r = (N - 1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(int data)
{
    if (r == (N - 1))
    {
        printf("%d Queue Overflow");
    }
    else
    {
        if (f == -1)
        {
            f = 0;
            arr[index] = data;
            index++;
            r++;
        }
        else
        {
            arr[index] = data;
            index++;
            r++;
        }
    }
}

void dequeue()
{
    if (f == -1)
    {
        printf("%d Queue Underflow");
    }
    else
    {
        printf("Dequeued element is %d\n", arr[f]);
        f++;
    }
}

void printQueue()
{
    if (r == -1)
    {
        printf("Queue is empty %d\n");
    }
    else
    {
        for (int i = f; i <= r; i++)
        {
            printf("Element: %d\n", arr[i]);
        }
    }
}

int main()
{
    enqueue(4);
    enqueue(5);
    enqueue(6);
    // dequeue();
    dequeue();
    printQueue();

    return 0;
}
