/*
Day 15 - Question 30

Write a program to reverse a given number.

Input:
A single line with one integer.

Output:
A single line with the digits of the number in reverse order.

Constraints:
No constraints are stated on the challenge website.

Sample Input 1:
1234

Sample Output 1:
4321

Sample Input 2:
100

Sample Output 2:
1
*/

#include <stdio.h>

int main()
{
    int number, digit, reversed = 0;

    scanf("%d", &number);

    while (number > 0)
    {
        digit = number % 10;
        reversed = reversed * 10 + digit;
        number = number / 10;
    }

    printf("%d\n", reversed);

    return 0;
}
