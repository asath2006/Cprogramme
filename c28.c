#include <stdio.h>

struct employee
{
    int id;
    char name[100];
    float salary;
};

int main()
{
    struct employee e[10];
    float totalSalary = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("\nEnter details of employee %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &e[i].id);

        printf("Name: ");
        scanf("%s", e[i].name);

        printf("Salary: ");
        scanf("%f", &e[i].salary);

        totalSalary += e[i].salary;
    }
    int maxIndex = 0;

    for (int i = 1; i < 10; i++)
    {
        if (e[i].salary > e[maxIndex].salary)
        {
            maxIndex = i;
        }
    }

    printf("\nTotal salary payout = %.2f\n", totalSalary);

    printf("\nEmployee with highest salary:\n");
    printf("ID: %d\nName: %s\nSalary: %.2f\n", e[maxIndex].id, e[maxIndex].name, e[maxIndex].salary);

    return 0;
}
