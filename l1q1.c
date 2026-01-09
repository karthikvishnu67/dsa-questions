#include <stdio.h>


typedef struct{
    int ID;
    char name[100];
    float Marks[3];
}Student;

float average(Student a)
{
    float avg;
    float sum= a.Marks[0] + a.Marks[1]+ a.Marks[2];
    avg = sum/3;

    return avg;

}
int main()
{
    printf("enter the number of students: ");
    int n;
    scanf("%d",&n);

    Student array[n]; 

    for(int i= 0; i<n; i++)
    {
        printf("enter the id for student %d:  ",i+1);
        scanf("%d",&array[i].ID);

        printf("enter the name for student %d: ",i+1);
        scanf("%s",array[i].name);

        printf("enter the marks in subject 1 for student %d: ",i+1);
        scanf("%f",&array[i].Marks[0]);

        printf("enter the marks in subject 2 for student %d: ",i+1);
        scanf("%f",&array[i].Marks[1]);

        printf("enter the marks in subject 3 for student %d: ",i+1);
        scanf("%f",&array[i].Marks[2]);

    }
    float avg[n];

    for(int i = 0; i<n; i++)
    {
        avg[i]= average(array[i]);
    }

    printf("merit list:  \n");

    int count = 0;
    for(int i= 0; i<n; i++)
    {
        if ((avg[i]/100)>0.75)
        {
            printf("%d %s %f",array[i].ID,array[i].name,average(array[i]));
            count++;
        }
    }

    if (count == 0)
    {
        printf("No Output\n");
    }
    float current_max= avg[0];
    int index = 0;
    for(int i = 1; i< n; i++)
    {
        if (avg[i]> current_max)
        {
            current_max=avg[i];
            index = i;
        }
        
    }

    printf("\n");
    printf("topper: %s",array[index].name);


    return 0;
}