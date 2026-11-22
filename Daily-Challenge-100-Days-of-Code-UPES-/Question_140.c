// Q140: Define a struct with enum Gender and print person's gender.
#include <stdio.h>
#include <string.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    char name[32];
    enum Gender gender;
};

int main(void)
{
    struct Person p;
    char input[16];

    printf("Enter name: ");
    scanf("%31s", p.name);

    printf("Enter gender (MALE/FEMALE/OTHER): ");
    scanf("%15s", input);

    if (strcmp(input, "MALE") == 0)
        p.gender = MALE;
    else if (strcmp(input, "FEMALE") == 0)
        p.gender = FEMALE;
    else
        p.gender = OTHER;

    switch (p.gender) {
    case MALE:   printf("Male\n");   break;
    case FEMALE: printf("Female\n"); break;
    case OTHER:  printf("Other\n");  break;
    default:     printf("Invalid output!\n");
    }

    return 0;
}
