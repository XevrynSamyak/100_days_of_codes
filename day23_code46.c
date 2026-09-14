/*
Day 23 - Question 46

Write a program to print the following pattern:
*****
*****
*****
*****
*****

Input:
No input is required.

Output:
Five lines, each containing five stars.

Constraints:
No constraints are stated on the challenge website.

Sample Input:
(no input)

Sample Output:
*****
*****
*****
*****
*****
*/

#include <stdio.h>

int main()
{
    int row, column;

    for (row = 1; row <= 5; row++)
    {
        for (column = 1; column <= 5; column++)
            printf("*");
        printf("\n");
    }

    return 0;
}
