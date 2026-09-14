/*
Day 18 - Question 35

Write a program to print all factors of a given number.

Input:
A single line with one integer.

Output:
A single line with every factor of the number, in increasing order,
separated by single spaces.

Constraints:
No constraints are stated on the challenge website.

Sample Input 1:
6

Sample Output 1:
1 2 3 6

Sample Input 2:
10

Sample Output 2:
1 2 5 10
*/

#include <stdio.h>

int main()
{
    int number, i, printed = 0;

    scanf("%d", &number);

    for (i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            if (printed > 0)
                printf(" ");
            printf("%d", i);
            printed++;
        }
    }
    printf("\n");

    return 0;
}
