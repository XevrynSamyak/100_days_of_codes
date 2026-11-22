// Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.
#include <stdio.h>
#include <string.h>

struct Student {
    char name[32];
    int roll_no;
    int marks;
};

int main(void)
{
    struct Student s;

    printf("Enter the name of student: ");
    if (fgets(s.name, sizeof s.name, stdin) == NULL)
        return 1;
    s.name[strcspn(s.name, "\n")] = '\0';

    printf("Enter the roll no: ");
    scanf("%d", &s.roll_no);

    printf("Enter the marks: ");
    scanf("%d", &s.marks);

    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);
    return 0;
}
