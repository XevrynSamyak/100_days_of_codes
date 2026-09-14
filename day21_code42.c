/*
Day 21 - Question 42

Write a program to check if a number is a perfect number.

Input:
A single line with one integer.

Output:
A single line: Perfect number or Not perfect number

Constraints:
No constraints are stated on the challenge website.

Sample Input 1:
6

Sample Output 1:
Perfect number

Sample Input 2:
10

Sample Output 2:
Not perfect number
*/

#include <stdio.h>

int main()
{
    int number, i, sum = 0;

    scanf("%d", &number);

    for (i = 1; i < number; i++)
    {
        if (number % i == 0)
            sum = sum + i;
    }

    if (sum == number && number > 0)
        printf("Perfect number\n");
    else
        printf("Not perfect number\n");

    return 0;
}
