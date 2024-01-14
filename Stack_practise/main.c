#include <stdio.h>
#include <stdlib.h>
#define n 3

int array[n];
int top = -1;

void push(int x)
{
    if(top==n-1)
    {
        printf("This Stack Already full\n");
    }
    else
    {
       top=top+1;
       array[top]=x;
       printf("Pushed Value %d\n",x);
    }
}

void pop()
{
    if(top==-1)
    {
        printf("After pop top is %d\n",array[top]);
    }
    else
    {
        printf("Poped Value %d\n",array[top]);
        top=top-1;
    }
}

void Top()
{
    printf("Top in stacks %d\n",array[top]);
}

IsEmpty()
{
    if(top==-1)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}

void print()
{
    for(int i=0;i<=top-1;i++)
    {
        printf("After a operation %d\n",array[i]);
    }
}

int main()
{
    IsEmpty();
    print();
    push(3);
    Top();
    print();
    push(4);
    print();
    Top();
    push(5);
    push(6);
    pop();
    IsEmpty();
    pop();
    pop();
    pop();
    IsEmpty();

    return 0;
}
