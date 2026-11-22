// Q138: Print all enum names and integer values using a loop.
#include <stdio.h>

enum Color { RED, YELLOW, GREEN };

int main(void)
{
    const char *names[] = { "RED", "YELLOW", "GREEN" };
    enum Color c;

    for (c = RED; c <= GREEN; c++)
        printf("%s=%d\n", names[c], c);

    return 0;
}
