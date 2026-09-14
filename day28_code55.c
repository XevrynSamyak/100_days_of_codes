/*
Day 28 - Question 55

Write a program to print all the prime numbers from 1 to n.

Input:
A single line with one integer n.

Output:
A single line with every prime number from 1 to n, separated by single spaces.

Constraints:
No constraints are stated on the challenge website.

Sample Input 1:
10

Sample Output 1:
2 3 5 7

Sample Input 2:
20

Sample Output 2:
2 3 5 7 11 13 17 19
*/

#include <stdio.h>

int main()
{
    int n, number, divisor, isPrime, printed = 0;

    scanf("%d", &n);

    for (number = 2; number <= n; number++)
    {
        isPrime = 1;
        for (divisor = 2; divisor * divisor <= number; divisor++)
        {
            if (number % divisor == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1)
        {
            if (printed > 0)
                printf(" ");
            printf("%d", number);
            printed++;
        }
    }
    printf("\n");

    return 0;
}
