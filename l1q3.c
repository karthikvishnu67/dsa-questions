#include <stdio.h>
#include <string.h>

int  wordcount(char string[], int n)
{
    int count=1;

    if(string[0]=='\0' || string[0]=='\n')
    {
        return 0;
    }
    for (int i=0; i<n; i++)
    {
        
        if (string[i]==' ')
        {
            count++;
        }
    }
    

    return count;
}



int vowelcount(char string[], int n)
{
    int count =0;


    for(int i=0; i<n; i++)
    {
        if(string[i]== 'a' ||string[i]== 'e' ||string[i]== 'i' ||string[i]== 'o' ||string[i]== 'u')
        {
            count++;
        }
    }

    return count;

}


void reverse(char string[], int n, char result[])
{
    if (n > 0 && string[n-1] == '\n') 
    {
        n--; 
    }
    if (string[0] =='\0' || string[0]=='\n')
    {
        printf(" ");
    }
    for(int i=0; i< n; i++)
    {
        result[n-i-1]= string[i];
    }

    result[n]='\0';



}
int main()
{
    char str[100];

    fgets(str,100,stdin);

    int result1= wordcount(str, strlen(str));
    printf("%d", result1);

    printf("\n");


    int vowels= vowelcount(str, strlen(str));
    printf("%d", vowels);

    printf("\n");

    char result[strlen(str)+1];

    reverse(str,strlen(str),result);

    printf("%s\n", result);


    return 0; 


}