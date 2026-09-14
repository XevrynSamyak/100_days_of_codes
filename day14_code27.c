/*
Day 14 - Question 27

Write a program to print the sum of the first n odd numbers.

Input:
A single line with one integer n.

Output:
A single line with the sum of the first n odd numbers.

Constraints:
No constraints are stated on the challenge website.

Sample Input 1:
3

Sample Output 1:
9

Sample Input 2:
5

Sample Output 2:
25
*/

#include <stdio.h>

int main()
{
    int n, i, oddNumber = 1, sum = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + oddNumber;
        oddNumber = oddNumber + 2;
    }

    printf("%d\n", sum);

    return 0;
}
