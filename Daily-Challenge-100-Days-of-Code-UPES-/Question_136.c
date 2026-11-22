// Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include <stdio.h>
#include <string.h>

enum Choice {
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main(void)
{
    char op[16];
    int a, b;
    enum Choice choice;

    printf("Enter the operation and two integers: ");
    if (scanf("%15s %d %d", op, &a, &b) != 3)
        return 1;

    if (strcmp(op, "ADD") == 0)
        choice = ADD;
    else if (strcmp(op, "SUBTRACT") == 0)
        choice = SUBTRACT;
    else
        choice = MULTIPLY;

    switch (choice) {
    case ADD:      printf("%d\n", a + b); break;
    case SUBTRACT: printf("%d\n", a - b); break;
    case MULTIPLY: printf("%d\n", a * b); break;
    }

    return 0;
}
