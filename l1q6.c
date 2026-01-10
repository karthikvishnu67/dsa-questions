#include <stdio.h>

void sort(int a[],int n)
{
    int i,key,j;
    for(int i=1; i<n;i++)
    {
        key= a[i];
        j=i-1;


        while (j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }


}


int main()
{
    int n;
    printf("enter the size of the array: ");

    scanf("%d",&n);

    int array[n];


    for (int i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    

    sort(array,n);
    int i=0;

    
    while (i<n)
    {
        int j= i+1,count =1;
        while (j<n && (array[j]==array[i]))
        {
           
            count++;
            j++;
        }
        printf("%d-> %d \n",array[i],count);
        i=j;
    }

    return 0;
}