/*
Day 16 - Question 32

Write a program to check if a number is a palindrome.

Input:
A single line with one integer.

Output:
A single line: Palindrome or Not palindrome

Constraints:
No constraints are stated on the challenge website.

Sample Input 1:
121

Sample Output 1:
Palindrome

Sample Input 2:
123

Sample Output 2:
Not palindrome
*/

#include <stdio.h>

int main()
{
    int number, temp, reversed = 0;

    scanf("%d", &number);

    temp = number;
    while (temp > 0)
    {
        reversed = reversed * 10 + temp % 10;
        temp = temp / 10;
    }

    if (reversed == number)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
