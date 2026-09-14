/*
Day 20 - Question 40

Write a program to find the 1’s complement of a binary number and print it.

Input:
A single line with a binary number (digits 0 and 1 only).

Output:
A single line with the 1's complement, keeping the same number of digits.

Constraints:
No constraints are stated on the challenge website.

Sample Input 1:
1010

Sample Output 1:
0101

Sample Input 2:
1111

Sample Output 2:
0000
*/

#include <stdio.h>

int main()
{
    long long binary, temp, divisor = 1;
    int digit;

    scanf("%lld", &binary);

    /* Place value of the left-most digit, so leading zeros of the answer are kept. */
    temp = binary;
    while (temp >= 10)
    {
        divisor = divisor * 10;
        temp = temp / 10;
    }

    temp = divisor;
    while (temp > 0)
    {
        digit = (int) ((binary / temp) % 10);
        if (digit == 0)
            printf("1");
        else
            printf("0");
        temp = temp / 10;
    }
    printf("\n");

    return 0;
}
