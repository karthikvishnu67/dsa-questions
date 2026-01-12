#include <stdio.h>
#include <string.h>

int min(int n1,int n2)
{
    if (n1>n2)
    {
        return n2;
    }
    else if(n2>n1)
    {
        return n1;
    }
    else
    {
        return n1;
    }
}
int intersection(int *array1, int n1, int *array2, int n2,int result[])
{
    int count =0;
    
    for (int i=0; i<n1; i++)
    {
        int j=0;
        while(j<n2)
        {
            if (array1[i] == array2[j] )
            {
                result[count]= array1[i];
                count++;
                break;
            }
            j++;
        }
    }
    return count;
}


void findunion(int *array1, int n1, int *array2, int n2,int *array3)
{
    int k =0;
    
    
    for (int i=0;i<n1;i++)
    {
        int exists=0;
        int j=0;
        while(j<n2)
        {
            if (array1[i]==array2[j])
            {
                exists=1;
            }
            j++;
        }
        if(!exists)
        {
            array3[k]=array1[i];
            k++;
        }

    }

    for(int i=0;i<n2;i++)
    {
        array3[k]=array2[i];
        k++;
    }

}

int main()
{


    int n1,n2;
    printf("enter size of first array: ");
    scanf("%d",&n1);
    int array1[n1];

    for(int i=0;i<n1;i++)
    {
        scanf("%d",&array1[i]);
    }


    printf("enter size of second array: ");


    scanf("%d",&n2);
    int array2[n2];

    for(int i =0;i<n2;i++)
    {
        scanf("%d",&array2[i]);
    }
    int size = min(n1,n2);
    int result[size];



    int count = intersection(array1,n1,array2,n2,result);

    printf("intersection: ");



    for(int i=0;i<count; i++)
    {
        printf("%d ",result[i]);
    }

    int array3[(n1+n2)-count];

    findunion(array1,n1,array2,n2,array3);
    printf("\n");

    printf("union: ");

    for(int i=0;i<((n1+n2)-count); i++)
    {
        printf("%d ",array3[i]);
    }


    return 0;


}

