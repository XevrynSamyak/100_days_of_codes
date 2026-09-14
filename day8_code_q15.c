/*
Day 8 - Question 15

Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

Input:
A single line with one character.

Output:
A single line containing one of:
Uppercase alphabet, Lowercase alphabet, Digit, Special character

Constraints:
No constraints are stated on the challenge website.

Sample Input 1:
A

Sample Output 1:
Uppercase alphabet

Sample Input 2:
a

Sample Output 2:
Lowercase alphabet

Sample Input 3:
3

Sample Output 3:
Digit

Sample Input 4:
#

Sample Output 4:
Special character
*/

#include <stdio.h>

int main()
{
    char ch;

    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        printf("Uppercase alphabet\n");
    else if (ch >= 'a' && ch <= 'z')
        printf("Lowercase alphabet\n");
    else if (ch >= '0' && ch <= '9')
        printf("Digit\n");
    else
        printf("Special character\n");

    return 0;
}
