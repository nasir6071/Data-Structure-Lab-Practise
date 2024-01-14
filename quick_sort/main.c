#include <stdio.h>
#include <stdlib.h>
#define n 5
int number[n];


void quicksort(int number[],int first,int last)
{
    int i,j,pivot,temp;
    if(first<last)
    {
        pivot=first;
        i=first;
        j=last;
        while(i<j)
        {
            while(number[i]<=number[pivot]&& i<last)
                i++;
            while(number[j]>number[pivot])
                j--;
            if(i<j)
            {
                ///using temp
                /*temp=number[i];
                number[i]=number[j];
                number[j]=temp;*/

                ///Using +and-
                /*number[i]=number[i]+number[i+1];
                number[i+1]=number[i]-number[i+1];
                number[i]=number[i]-number[i+1];*/

                ///Using *and/
                /*number[i]=number[i]*number[i+1];
                number[i+1]=number[i]/number[i+1];
                number[i]=number[i]/number[i+1];*/

                ///Using bit wise
                number[i]=number[i]^number[i+1];
                number[i+1]=number[i]^number[i+1];
                number[i]=number[i]^number[i+1];
            }
        }

        ///Using temp;
        temp=number[pivot];
        number[pivot]=number[j];
        number[j]=temp;
        ///Using +and-
        /*number[pivot]=number[pivot]+number[pivot+1];
        number[pivot+1]=number[pivot]-number[pivot+1];
        number[pivot]=number[pivot]-number[pivot+1];*/

        quicksort(number,first,j-1);
        quicksort(number,j+1,last);
    }
}

int main()
{
    int i;
    printf("Enter Your Numbers\n");
    for(i=0;i<n; i++)
    {
        scanf("%d",&number[i]);
    }
    quicksort(number,0,n-1);
    for(i=0; i<n; i++)
    {
        printf("%d ",number[i]);
    }
    return 0;
}












