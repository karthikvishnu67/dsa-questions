#include <stdio.h>


int main()
{
    int n1;
    printf("enter the size of the first array: ");
    scanf("%d",&n1);


    int array1[n1];
    for(int i= 0; i<n1;i++)
    {
        scanf("%d", &array1[i]);
    }


    int n2;
    printf("enter the size of the second array: ");
    scanf("%d",&n2);

    int array2[n2];
    for(int i= 0; i<n2;i++)
    {
        scanf("%d", &array2[i]);
    }

    int array3[n1+n2];
    int i=0,j=0,k=0;

    while (i<n1 &&j<n2)
    {
        if (array1[i]>array2[j])
        {
            array3[k]= array2[j];
            j++;
        }
        else 
        {
            array3[k]= array1[i];
            i++;
        }
        k++;

    }
    while (i < n1) {
        array3[k] = array1[i];
        i++;
        k++;
    }
    while (j < n2) {
        array3[k] = array2[j];
        j++;
        k++;
    }
    
        
    

    for (int i =0; i< (sizeof(array3)/sizeof(array3[0]));i++)
    {
        printf("%d ",array3[i]);
    }

    return 0;


    
}