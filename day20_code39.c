/*
Day 20 - Question 39

Write a program to find the product of odd digits of a number.

Input:
A single line with one integer.

Output:
A single line: <product> (<the odd digits multiplied together>)
If the number has no odd digits the product is taken as 1.

Constraints:
No constraints are stated on the challenge website.

Sample Input 1:
12345

Sample Output 1:
15 (1*3*5)

Sample Input 2:
2468

Sample Output 2:
1 (no odd digits, assume 1)
*/

#include <stdio.h>

int main()
{
    int number, temp, divisor = 1, digit, count = 0, printed = 0;
    long long product = 1;

    scanf("%d", &number);

    if (number < 0)
        number = -number;

    /* Find the place value of the left-most digit so digits can be read left to right. */
    temp = number;
    while (temp >= 10)
    {
        divisor = divisor * 10;
        temp = temp / 10;
    }

    temp = divisor;
    while (temp > 0)
    {
        digit = (number / temp) % 10;
        if (digit % 2 == 1)
        {
            product = product * digit;
            count++;
        }
        temp = temp / 10;
    }

    if (count == 0)
    {
        printf("1 (no odd digits, assume 1)\n");
        return 0;
    }

    printf("%lld (", product);
    temp = divisor;
    while (temp > 0)
    {
        digit = (number / temp) % 10;
        if (digit % 2 == 1)
        {
            if (printed > 0)
                printf("*");
            printf("%d", digit);
            printed++;
        }
        temp = temp / 10;
    }
    printf(")\n");

    return 0;
}
