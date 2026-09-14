#include <stdio.h>

int main()
{
    int first, second;

    scanf("%d %d", &first, &second);

    printf("Sum=%d, Diff=%d, Product=%d", first + second, first - second, first * second);

    /* Division by zero is undefined in C, so guard it before dividing. */
    if (second != 0)
        printf(", Quotient=%d\n", first / second);
    else
        printf(", Quotient=undefined (division by zero)\n");

    return 0;
}
