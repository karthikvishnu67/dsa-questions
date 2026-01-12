#include <stdio.h>


void rotateLeft(int arr[],int k,int n)
{
    int r=k%n;
    for (int i=0;i<r;i++)
    {
        int temp = arr[0];
        for(int j=0;j<n-1;j++)
        {
            arr[j]=arr[j+1];
        }
        arr[n-1]=temp;
    }
}

void rotateRight(int arr[],int k,int n)
{
    int r=k%n;
    for (int i=0;i<r;i++)
    {
        int temp = arr[n-1];
        for(int j=0;j<n-1;j++)
        {
            arr[n-j-1]=arr[n-j-2];
        }
        arr[0]=temp;
    }
}
    
int main()
{
    int n,d,k;
    printf("enter size of array: ");
    scanf("%d",&n);
    int array[n];

    for(int i =0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("enter direction: ");
    scanf("%d",&d);

    printf("enter number of shifts: ");
    scanf("%d",&k);


    if (d==1)
    {
        rotateRight(array,k,n);
    }
    else
    {
        rotateLeft(array,k,n);
    }

    for(int i=0;i<n; i++)
    {
        printf("%d ",array[i]);
    }

    return 0;
}