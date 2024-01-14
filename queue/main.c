#include <stdio.h>
#include <stdlib.h>
#define n 3
int queue[n], front= -1, rear= -1;

int enqueue(int data)
{
    if(rear==n-1)
        return 0;
    else
    {
        if(front== -1)
            front=0;
        rear= rear+1;
        queue[rear]=data;
        printf("Enqueue Value %d\n",queue[rear]);
        return 1;
    }
}

int dequeue()
{
    if(rear==-1 || front>rear)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Dequeue Value %d\n",queue[front]);
        front++;
    }
    return 1;
}

int Print()
{
    for(int i=front; i<=rear; i++)
        printf("%d\n",queue[i]);
}

int main()
{
    enqueue(10);
    enqueue(5);
    enqueue(2);
    Print();
    dequeue();
    Print();
    dequeue();
    Print();
    dequeue();
    dequeue();

    return 0;
}
