// Q149: Use malloc() to allocate structure memory dynamically and print details.
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[32];
    int roll_no;
    int marks;
};

int main(void)
{
    struct Student *s = malloc(sizeof *s);

    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter name: ");
    scanf("%31s", s->name);
    printf("Enter roll_no: ");
    scanf("%d", &s->roll_no);
    printf("Enter marks: ");
    scanf("%d", &s->marks);

    printf("Name: %s | Roll: %d | Marks: %d\n", s->name, s->roll_no, s->marks);
    free(s);
    return 0;
}
