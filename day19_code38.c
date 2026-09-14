/*
Day 19 - Question 38

Write a program to find the sum of digits of a number.

Input:
A single line with one integer.

Output:
A single line with the sum of the digits of the number.

Constraints:
No constraints are stated on the challenge website.

Sample Input 1:
123

Sample Output 1:
6

Sample Input 2:
999

Sample Output 2:
27
*/

#include <stdio.h>

int main()
{
    int number, sum = 0;

    scanf("%d", &number);

    while (number > 0)
    {
        sum = sum + number % 10;
        number = number / 10;
    }

    printf("%d\n", sum);

    return 0;
}
