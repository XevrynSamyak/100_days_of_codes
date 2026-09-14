/*
Day 27 - Question 53

Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

Input:
No input is required.

Output:
Nine lines containing 1, 3, 5, 7, 9, 7, 5, 3 and 1 stars.

Constraints:
No constraints are stated on the challenge website.

Sample Input:
(no input)

Sample Output:
*
***
*****
*******
*********
*******
*****
***
*
*/

#include <stdio.h>

int main()
{
    int row, star;

    /* Upper half: 1, 3, 5, 7 and 9 stars. */
    for (row = 1; row <= 5; row++)
    {
        for (star = 1; star <= 2 * row - 1; star++)
            printf("*");
        printf("\n");
    }

    /* Lower half: 7, 5, 3 and 1 stars. */
    for (row = 4; row >= 1; row--)
    {
        for (star = 1; star <= 2 * row - 1; star++)
            printf("*");
        printf("\n");
    }

    return 0;
}
