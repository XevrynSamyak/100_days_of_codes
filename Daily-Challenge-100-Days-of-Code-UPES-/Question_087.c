// Q87: Count spaces, digits, and special characters in a string.
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char text[100];
    int spaces = 0, digits = 0, special = 0;
    size_t i;

    printf("Enter a string: ");
    if (fgets(text, sizeof text, stdin) == NULL)
        return 1;
    text[strcspn(text, "\n")] = '\0';

    for (i = 0; text[i] != '\0'; i++) {
        unsigned char c = (unsigned char)text[i];
        if (c == ' ')
            spaces++;
        else if (isdigit(c))
            digits++;
        else if (!isalnum(c))
            special++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
    return 0;
}
