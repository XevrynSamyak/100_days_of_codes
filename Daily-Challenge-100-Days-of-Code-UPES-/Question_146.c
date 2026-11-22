// Q146: Create Employee structure with nested Date structure for joining date and print details.
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[32];
    int id;
    struct Date joining_date;
};

int main(void)
{
    struct Employee e;

    printf("Enter employee name: ");
    scanf("%31s", e.name);
    printf("Enter employee id: ");
    scanf("%d", &e.id);
    printf("Enter joining date (day month year): ");
    scanf("%d %d %d", &e.joining_date.day, &e.joining_date.month, &e.joining_date.year);

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%d\n",
           e.name, e.id, e.joining_date.day, e.joining_date.month, e.joining_date.year);
    return 0;
}
