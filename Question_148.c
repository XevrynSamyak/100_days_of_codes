// Q148: Take two structs as input and check if they are identical.
#include <stdio.h>
#include <string.h>

struct Student {
    char name[32];
    int rollNo;
    int marks;
};

static int sameStudent(const struct Student *a, const struct Student *b)
{
    return strcmp(a->name, b->name) == 0 &&
           a->rollNo == b->rollNo &&
           a->marks == b->marks;
}

int main(void)
{
    struct Student s[2];
    int i;

    for (i = 0; i < 2; i++) {
        printf("Student %d\n", i + 1);
        printf("Name: ");
        scanf("%31s", s[i].name);
        printf("Roll number: ");
        scanf("%d", &s[i].rollNo);
        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }

    printf(sameStudent(&s[0], &s[1]) ? "Same\n" : "Not Same\n");
    return 0;
}
