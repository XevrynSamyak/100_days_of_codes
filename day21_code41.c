/*
Day 21 - Question 41

Write a program to swap the first and last digit of a number.

Input:
A single line with one integer.

Output:
A single line with the number after its first and last digits are exchanged.

Constraints:
No constraints are stated on the challenge website.

Sample Input 1:
1234

Sample Output 1:
4231

Sample Input 2:
1001

Sample Output 2:
1001
*/

#include <stdio.h>

int main()
{
    int number, temp, divisor = 1, firstDigit, lastDigit, middle, result;

    scanf("%d", &number);

    temp = number;
    while (temp >= 10)
    {
        divisor = divisor * 10;
        temp = temp / 10;
    }

    firstDigit = number / divisor;
    lastDigit = number % 10;
    middle = number - firstDigit * divisor - lastDigit;

    result = lastDigit * divisor + middle + firstDigit;

    printf("%d\n", result);

    return 0;
}
