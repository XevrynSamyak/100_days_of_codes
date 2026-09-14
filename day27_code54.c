/*
Day 27 - Question 54

Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *


Input:
No input is required.

Output:
Seven lines forming a diamond: rows of 1, 3, 5, 7, 5, 3 and 1 stars,
each row indented so the diamond is centred.

Constraints:
No constraints are stated on the challenge website.

Sample Input:
(no input)

Sample Output:
   *
  ***
 *****
*******
 *****
  ***
   *

Note:
The website's sample output only says "Pattern with layers of stars as shown",
so the pattern printed in the question itself is the expected output.
*/

#include <stdio.h>

int main()
{
    int row, space, star;

    /* Upper half: rows of 1, 3, 5 and 7 stars. */
    for (row = 1; row <= 4; row++)
    {
        for (space = 1; space <= 4 - row; space++)
            printf(" ");
        for (star = 1; star <= 2 * row - 1; star++)
            printf("*");
        printf("\n");
    }

    /* Lower half: rows of 5, 3 and 1 stars. */
    for (row = 3; row >= 1; row--)
    {
        for (space = 1; space <= 4 - row; space++)
            printf(" ");
        for (star = 1; star <= 2 * row - 1; star++)
            printf("*");
        printf("\n");
    }

    return 0;
}
