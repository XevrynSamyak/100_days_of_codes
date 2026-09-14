/*
Day 19 - Question 37

Write a program to find the LCM of two numbers.

Input:
A single line with two integers separated by a space.

Output:
A single line with the LCM of the two numbers.

Constraints:
No constraints are stated on the challenge website.

Sample Input 1:
4 5

Sample Output 1:
20

Sample Input 2:
7 3

Sample Output 2:
21
*/

#include <stdio.h>

int main()
{
    int first, second, a, b, remainder, hcf, lcm;

    scanf("%d %d", &first, &second);

    a = first;
    b = second;
    while (b != 0)
    {
        remainder = a % b;
        a = b;
        b = remainder;
    }
    hcf = a;

    lcm = (first / hcf) * second;

    printf("%d\n", lcm);

    return 0;
}
