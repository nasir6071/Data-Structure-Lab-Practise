#include <stdio.h>
#include <stdlib.h>
#define n 5
int array[n];

int bubble_sort(int a[])
{
    int i,j,tmp;
    int swap=0;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(a[j] > a[j+1])
            {
                 ///Using temp
                 tmp= a[j];
                 a[j]=a[j+1];
                 a[j+1]= tmp;
                 ///Using + and -
                 /*a[j]= a[j]+a[j+1];
                 a[j+1]=a[j]-a[j+1];
                 a[j]=a[j]-a[j+1];*/
                 ///Using * and /
                 /*a[j]= a[j]*a[j+1];
                 a[j+1]=a[j]/a[j+1];
                 a[j]=a[j]/a[j+1];*/
                 ///Using bit wise
                 /*a[j]= a[j]^a[j+1];
                 a[j+1]=a[j]^a[j+1];
                 a[j]=a[j]^a[j+1];*/

                 swap = 1;
            }

        }
        if(swap==0)
        {
            printf("Already Sorted\n");
            return 0;
        }

    }
}

int main()
{
    int i;
    printf("Enter Your Values\n");

    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    bubble_sort(array);
    for(i=0; i<n; i++)
    {
        printf("%d ",array[i]);
    }

}
