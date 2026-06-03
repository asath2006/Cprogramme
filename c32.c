#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[30];
    float marks;
} Student;

int main() {
    Student s1, s2;
    s1.id = 101;
    strcpy(s1.name, "Arun");
    s1.marks = 88.5;
    s2.id = 102;
    strcpy(s2.name, "Karthi");
    s2.marks = 92.0;
    printf("Student 1 Details:\n");
    printf("ID: %d\nName: %s\nMarks: %.2f\n\n", 
            s1.id, s1.name, s1.marks);
    printf("Student 2 Details:\n");
    printf("ID: %d\nName: %s\nMarks: %.2f\n", 
            s2.id, s2.name, s2.marks);

    return 0;
}
