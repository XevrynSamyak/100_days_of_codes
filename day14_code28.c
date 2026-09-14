/*
Day 14 - Question 28

Write a program to print the product of even numbers from 1 to n.

Input:
A single line with one integer n.

Output:
A single line: <product> (<the even numbers multiplied together>)

Constraints:
No constraints are stated on the challenge website.

Sample Input 1:
4

Sample Output 1:
8 (2 * 4)

Sample Input 2:
6

Sample Output 2:
48 (2 * 4 * 6)
*/

#include <stdio.h>

int main()
{
    int n, i, count = 0;
    long long product = 1;

    scanf("%d", &n);

    for (i = 2; i <= n; i = i + 2)
    {
        product = product * i;
        count++;
    }

    if (count == 0)
    {
        printf("1 (no even numbers)\n");
        return 0;
    }

    printf("%lld (", product);
    for (i = 2; i <= n; i = i + 2)
    {
        printf("%d", i);
        if (i + 2 <= n)
            printf(" * ");
    }
    printf(")\n");

    return 0;
}
