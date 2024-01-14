#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k;
    printf("Enter the Number of Element:\n");
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++)
    {
       scanf("%d",&array[i]);
    }
    scanf("%d",&k);
    if(k==1)
    {
      for(int i=0;i<n;i++)
       {
         printf("%d ",array[i]);
        }
    }
    else
    {
      for(int i=n-1;i>=0 ;i--)
       {
         printf("%d ",array[i]);
        }
    }

    return 0;
}
