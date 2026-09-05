#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    char name[50];
    float mark;
};

int main()
{
    struct Student s[100], temp;
    int n, i, j;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter roll, name and mark:\n");
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].mark);
    }

    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(strcmp(s[i].name, s[j].name) > 0)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\nStudents sorted by name:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d %s %.2f\n",
               s[i].roll, s[i].name, s[i].mark);
    }

    return 0;
}
