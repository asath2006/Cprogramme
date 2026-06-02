#include <stdio.h>

struct student
{
    int roll;
    char name[100];
    int marks;
};

void updateStudent(struct student *s)
{
    printf("\nEnter updated details:\n");

    printf("Roll: ");
    scanf("%d", &s->roll);

    printf("Name: ");
    scanf("%s", s->name);

    printf("Marks: ");
    scanf("%d", &s->marks);
}

void printStudent(struct student *s)
{
    printf("\nStudent Details:\n");
    printf("Roll: %d\n", s->roll);
    printf("Name: %s\n", s->name);
    printf("Marks: %d\n", s->marks);
}

int main()
{
    struct student s1;
    printf("Enter initial details:\n");

    printf("Roll: ");
    scanf("%d", &s1.roll);

    printf("Name: ");
    scanf("%s", s1.name);

    printf("Marks: ");
    scanf("%d", &s1.marks);

    updateStudent(&s1);

    printStudent(&s1);

    return 0;
}
