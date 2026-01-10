#include <stdio.h>

int main()
{
    int m,n,ri,ci,rh,ch;
    printf("enter the row and column size of the matrix: ");
    scanf("%d%d",&m,&n);


    int a[m][n];

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    int b[m][n];
    
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if (i==0 && j==0)
            {
                b[i][j] = a[i][j];
            }
            
            else
            {
                int sum=0;
                for(int k=0;k<=i;k++)
                {
                    for(int h=0;h<=j;h++)
                    {
                        sum= sum +a[k][h];
                    }
                }
                b[i][j]= sum;
            }
        }
    }

    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    printf("enter the row and column index and size of the submatrix in b: ");
    scanf("%d%d%d%d",&ri,&ci,&rh,&ch);

    if (ri + rh <=m && ci + ch<=n)
    {
        int sum1 = 0;
        for(int i=ri;i<=ri+rh-1;i++)
        {
            for(int j=ci;j<=ci+ch-1;j++)
            {
                sum1 = sum1 +b[i][j];
            }
        }
        printf("%d", sum1);
    }
    else
    {
        printf("not possible");
    }

    return 0;

       
}