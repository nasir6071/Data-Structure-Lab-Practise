#include <stdio.h>
#include <stdlib.h>
#define n 5
int array[n];

void binary_search(int a[],int target)
{
    int beg,end,mid;
    beg=0;
    end=n-1;
    while(beg<=end)
    {
        mid=(beg+end)/2;

        if(target==a[mid])
        {
            printf("found at the location Index %d\n",mid);
            return 0;
        }
        else if(target>a[mid])
        {
            beg=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    printf("Number Not found\n");
}

int main()
{
    int i,target,mid;
    printf("Enter your numbers in sorted\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter the find number:\n");
    scanf("%d",&target);
    binary_search(array,target);

    return 0;
}