// Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include <stdio.h>
#include <string.h>

enum Role { ADMIN, USER, GUEST };

int main(void)
{
    char input[32];
    enum Role role;

    printf("Enter the role: ");
    scanf("%31s", input);

    if (strcmp(input, "ADMIN") == 0)
        role = ADMIN;
    else if (strcmp(input, "USER") == 0)
        role = USER;
    else
        role = GUEST;

    switch (role) {
    case ADMIN: printf("Welcome Admin!\n"); break;
    case USER:  printf("Welcome User!\n");  break;
    case GUEST: printf("Welcome Guest!\n"); break;
    }

    return 0;
}
