// Q150: Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>

struct Student {
    char name[32];
    int roll;
    int marks;
};

int main(void)
{
    struct Student s;
    struct Student *ptr = &s;

    printf("Enter Name Roll Marks: ");
    if (scanf("%31s %d %d", ptr->name, &ptr->roll, &ptr->marks) != 3)
        return 1;

    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n",
           ptr->name, ptr->roll, ptr->marks);
    return 0;
}
