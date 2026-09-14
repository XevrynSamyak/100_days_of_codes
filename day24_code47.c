/*
Day 24 - Question 47

Write a program to print the following pattern:
*
**
***
****
*****

Input:
No input is required.

Output:
Five lines containing 1, 2, 3, 4 and 5 stars.

Constraints:
No constraints are stated on the challenge website.

Sample Input:
(no input)

Sample Output:
*
**
***
****
*****
*/

#include <stdio.h>

int main()
{
    int row, column;

    for (row = 1; row <= 5; row++)
    {
        for (column = 1; column <= row; column++)
            printf("*");
        printf("\n");
    }

    return 0;
}
