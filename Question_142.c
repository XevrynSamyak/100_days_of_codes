// Q142: Store details of 5 students in an array of structures and print all.
#include <stdio.h>

#define COUNT 5

struct Student {
    char name[32];
    int roll_no;
    int marks;
};

int main(void)
{
    struct Student students[COUNT];
    int i;

    for (i = 0; i < COUNT; i++) {
        printf("Details of student %d\n", i + 1);
        printf("Name: ");
        scanf("%31s", students[i].name);
        printf("Roll no: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }

    printf("\n%-20s %-8s %s\n", "Name", "Roll", "Marks");
    for (i = 0; i < COUNT; i++)
        printf("%-20s %-8d %d\n", students[i].name, students[i].roll_no, students[i].marks);

    return 0;
}
