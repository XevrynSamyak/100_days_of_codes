/*
Day 17 - Question 33

Write a program to check if a number is an Armstrong number.

Input:
A single line with one integer.

Output:
A single line: Armstrong or Not Armstrong

Constraints:
No constraints are stated on the challenge website.

Sample Input 1:
153

Sample Output 1:
Armstrong

Sample Input 2:
123

Sample Output 2:
Not Armstrong
*/

#include <stdio.h>

int main()
{
    int number, temp, digit, digitCount = 0, i;
    long long sum = 0, power;

    scanf("%d", &number);

    temp = number;
    while (temp > 0)
    {
        digitCount++;
        temp = temp / 10;
    }

    temp = number;
    while (temp > 0)
    {
        digit = temp % 10;
        power = 1;
        for (i = 1; i <= digitCount; i++)
            power = power * digit;
        sum = sum + power;
        temp = temp / 10;
    }

    if (sum == number)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}
