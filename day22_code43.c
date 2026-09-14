/*
Day 22 - Question 43

Write a program to check if a number is a strong number.

Input:
A single line with one integer.

Output:
A single line: Strong number or Not strong number

Constraints:
No constraints are stated on the challenge website.

Sample Input 1:
145

Sample Output 1:
Strong number

Sample Input 2:
123

Sample Output 2:
Not strong number
*/

#include <stdio.h>

int main()
{
    int number, temp, digit, i;
    long long factorial, sum = 0;

    scanf("%d", &number);

    temp = number;
    while (temp > 0)
    {
        digit = temp % 10;
        factorial = 1;
        for (i = 2; i <= digit; i++)
            factorial = factorial * i;
        sum = sum + factorial;
        temp = temp / 10;
    }

    if (sum == number)
        printf("Strong number\n");
    else
        printf("Not strong number\n");

    return 0;
}
