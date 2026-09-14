/*
Day 26 - Question 51

Write a program to print the following pattern:
    5
   45
  345
 2345
12345

Input:
No input is required.

Output:
Five lines. Line i starts with (5 - i) spaces, then counts from (6 - i) up to 5.

Constraints:
No constraints are stated on the challenge website.

Sample Input:
(no input)

Sample Output:
    5
   45
  345
 2345
12345
*/

#include <stdio.h>

int main()
{
    int row, space, column;

    for (row = 1; row <= 5; row++)
    {
        for (space = 1; space <= 5 - row; space++)
            printf(" ");
        for (column = 6 - row; column <= 5; column++)
            printf("%d", column);
        printf("\n");
    }

    return 0;
}
