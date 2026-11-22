// Q144: Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>

struct Student {
    char name[32];
    int roll_no;
    float marks;
};

static void printStudent(struct Student s)
{
    printf("\n--- Student Details ---\n");
    printf("Name: %s | Roll: %d | Marks: %g\n", s.name, s.roll_no, s.marks);
}

int main(void)
{
    struct Student s;

    printf("Enter name: ");
    scanf("%31s", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printStudent(s);
    return 0;
}
