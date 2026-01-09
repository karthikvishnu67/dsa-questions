#include <stdio.h>

int multiply(int a[], int b[],int n)
{
    int sum= 0;
    for(int i= 0; i<n; i++)
    {
        int t = (a[i])*(b[i]);
        sum = sum+t;
    }

    return sum;
}


int main()
{
    int r1,r2,c1,c2;
    printf("enter the rows of the first matrix: ");
    scanf("%d", &r1);
    printf("enter the columns of the first matrix: ");
    scanf("%d", &c1);
    int A[r1][c1];

    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }


    printf("enter the rows of the second matrix: ");
    scanf("%d", &r2);
    printf("enter the columns of the second matrix: ");
    scanf("%d", &c2);

    int B[r2][c2];
 
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }

    int C[r1][c2];
    if(c1 != r2)
    {
        printf("not possible");
    }
    else
    {
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
                int array1[c1];
                for(int h=0;h<c1;h++)
                {
                    array1[h]= A[i][h];
                }


                int array2[r2];
                for(int t=0;t<r2;t++)
                {
                    array2[t]=B[t][j];
                }
                C[i][j]= multiply(array1,array2,c1);
            }

            
        }
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
                printf("%d ", C[i][j]);
            }
            printf("\n");
        }

    }

    
    return 0;
}

