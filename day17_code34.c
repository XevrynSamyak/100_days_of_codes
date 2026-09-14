
/*
Day 17 - Question 34

Write a program to check if a number is prime.

Input:
A single line with one integer.

Output:
A single line: Prime or Not prime

Constraints:
No constraints are stated on the challenge website.

Sample Input 1:
7

Sample Output 1:
Prime

Sample Input 2:
10

Sample Output 2:
Not prime
*/

#include <stdio.h>

int main()
{
    int number, i, isPrime = 1;

    scanf("%d", &number);

    if (number < 2)
        isPrime = 0;

    for (i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 1)
        printf("Prime\n");
    else
        printf("Not prime\n");

    return 0;
}
