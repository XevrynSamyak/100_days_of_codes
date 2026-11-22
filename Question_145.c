// Q145: Return a structure containing top student's details from a function.
#include <stdio.h>

#define COUNT 3

struct Student {
    char name[32];
    int roll_no;
    int marks;
};

static struct Student getTopper(const struct Student list[], int n)
{
    struct Student top = list[0];
    int i;

    for (i = 1; i < n; i++)
        if (list[i].marks > top.marks)
            top = list[i];

    return top;
}

int main(void)
{
    struct Student students[COUNT];
    struct Student top;
    int i;

    for (i = 0; i < COUNT; i++) {
        printf("Enter details of student %d\n", i + 1);
        printf("Name: ");
        scanf("%31s", students[i].name);
        printf("Roll no: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }

    top = getTopper(students, COUNT);
    printf("Top Student: %s | Roll: %d | Marks: %d\n", top.name, top.roll_no, top.marks);
    return 0;
}
