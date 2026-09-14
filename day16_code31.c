/*
Day 16 - Question 31

Write a program to take a number as input and print its equivalent binary representation.

Input:
A single line with one integer (in decimal).

Output:
A single line with the same value written in binary.

Constraints:
No constraints are stated on the challenge website.

Sample Input 1:
10

Sample Output 1:
1010

Sample Input 2:
7

Sample Output 2:
111
*/

#include <stdio.h>

int main()
{
    int number, temp;
    long long binary = 0, place = 1;

    scanf("%d", &number);

    if (number == 0)
    {
        printf("0\n");
        return 0;
    }

    temp = number;
    while (temp > 0)
    {
        binary = binary + (temp % 2) * place;
        place = place * 10;
        temp = temp / 2;
    }

    printf("%lld\n", binary);

    return 0;
}
