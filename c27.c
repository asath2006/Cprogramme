#include <stdio.h>

struct student
{
    int roll;
    char name[250];
    int marks;
};

int main()
{
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student s[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details for student %d\n", i + 1);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }

    printf("\nStudent list:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\n%s\n%d\n", s[i].roll, s[i].name, s[i].marks);
    }

    printf("\nToppers list (marks >= 80):\n");

    for (int i = 0; i < n; i++)
    {
        if (s[i].marks >= 80)
        {
            printf("%d\n%s\n%d\n", s[i].roll, s[i].name, s[i].marks);
        }
    }

    return 0;
}
