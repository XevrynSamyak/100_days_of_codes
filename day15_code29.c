/*
Day 15 - Question 29

Write a program to calculate the factorial of a number.

Input:
A single line with one integer n.

Output:
A single line with n factorial.

Constraints:
No constraints are stated on the challenge website.

Sample Input 1:
5

Sample Output 1:
120

Sample Input 2:
3

Sample Output 2:
6
*/

#include <stdio.h>

int main()
{
    int n, i;
    long long factorial = 1;

    scanf("%d", &n);

    for (i = 2; i <= n; i++)
        factorial = factorial * i;

    printf("%lld\n", factorial);

    return 0;
}
