/*
Day 18 - Question 36

Write a program to find the HCF (GCD) of two numbers.

Input:
A single line with two integers separated by a space.

Output:
A single line with the HCF (GCD) of the two numbers.

Constraints:
No constraints are stated on the challenge website.

Sample Input 1:
12 18

Sample Output 1:
6

Sample Input 2:
7 9

Sample Output 2:
1
*/

#include <stdio.h>

int main()
{
    int first, second, remainder;

    scanf("%d %d", &first, &second);

    while (second != 0)
    {
        remainder = first % second;
        first = second;
        second = remainder;
    }

    printf("%d\n", first);

    return 0;
}
