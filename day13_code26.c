/*
Day 13 - Question 26

Write a program to print numbers from 1 to n.

Input:
A single line with one integer n.

Output:
A single line with the numbers 1 to n separated by single spaces.

Constraints:
No constraints are stated on the challenge website.

Sample Input 1:
5

Sample Output 1:
1 2 3 4 5

Sample Input 2:
3

Sample Output 2:
1 2 3
*/

#include <stdio.h>

int main()
{
    int n, i;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i > 1)
            printf(" ");
        printf("%d", i);
    }
    printf("\n");

    return 0;
}
