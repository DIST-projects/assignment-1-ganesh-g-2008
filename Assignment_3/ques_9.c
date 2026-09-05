#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee e[100];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter employee ID: ");
        scanf("%d", &e[i].id);

        printf("Enter employee name: ");
        scanf("%s", e[i].name);

        printf("Enter salary: ");
        scanf("%f", &e[i].salary);
    }

    printf("\nEmployee Details:\n");

    for(i = 0; i < n; i++)
    {
        printf("\nID     : %d", e[i].id);
        printf("\nName   : %s", e[i].name);
        printf("\nSalary : %.2f\n", e[i].salary);
    }

    return 0;
}
