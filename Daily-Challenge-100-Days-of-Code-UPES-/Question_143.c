// Q143: Find and print the student with the highest marks.
#include <stdio.h>

#define COUNT 3

struct Student {
    char name[32];
    int roll_no;
    int marks;
};

int main(void)
{
    struct Student students[COUNT];
    int i, top = 0;

    for (i = 0; i < COUNT; i++) {
        printf("Details of student %d\n", i + 1);
        printf("Name: ");
        scanf("%31s", students[i].name);
        printf("Roll no: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }

    for (i = 1; i < COUNT; i++)
        if (students[i].marks > students[top].marks)
            top = i;

    printf("Topper: %s (Marks: %d)\n", students[top].name, students[top].marks);
    return 0;
}
