/*
Day 26 - Question 52

Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



Input:
No input is required.

Output:
Five lines containing 1, 3, 5, 3 and 1 stars.

Constraints:
No constraints are stated on the challenge website.

Sample Input:
(no input)

Sample Output:
*
***
*****
***
*

Note:
The website's sample output only says "Pattern with stars spaced irregularly as
shown", so the pattern printed in the question itself is the expected output.
On the web page the leading spaces of the pattern are collapsed by the browser;
the shape is a diamond of 1, 3, 5, 3 and 1 stars.
*/

#include <stdio.h>

int main()
{
    int row, star;

    /* Upper half: 1, 3 and 5 stars. */
    for (row = 1; row <= 3; row++)
    {
        for (star = 1; star <= 2 * row - 1; star++)
            printf("*");
        printf("\n");
    }

    /* Lower half: 3 and 1 stars. */
    for (row = 2; row >= 1; row--)
    {
        for (star = 1; star <= 2 * row - 1; star++)
            printf("*");
        printf("\n");
    }

    return 0;
}
