/*
Day 7 - Question 14

Write a program to input a character and check whether it is a vowel or consonant using if–else.

Input:
A single line with one character.

Output:
A single line containing Vowel or Consonant.

Constraints:
No constraints are stated on the challenge website.

Sample Input 1:
a

Sample Output 1:
Vowel

Sample Input 2:
b

Sample Output 2:
Consonant
*/

#include <stdio.h>

int main()
{
    char ch;

    scanf(" %c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("Vowel\n");
    else
        printf("Consonant\n");

    return 0;
}
