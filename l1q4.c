#include <stdio.h>


int* findintersection(int a[],int n1,int b[],int n2)
{
    int c[n2];

    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<n1;j++)
        {
            if (b[i] == a[j])
            {
                c[i]=b[i];
            }
        }
    }

    for(int t=0, t<c.length;t++)
    {
        printf("%d", c[t]);
    }
    return c;
}

void union(int a[],int n1,int b[],int n2)
{
    int c[n1+n2];
    for(int i=0; i<n1;i++)
    {
        c[i]=a[i];
    }
    for(int i=0; i<n2;i++)
    {
        c[n1+i]=b[i];
    }

    int d[]=findintersection(int)

    for(int i=0; i<d.length;i++)
    {
        for(int j=0;j<(n1+n2);j++)
        {
            if(d[i] !=c[j])
            {
                printf()
            }
        }
    }





}