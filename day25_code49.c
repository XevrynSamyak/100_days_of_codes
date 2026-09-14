/*
Day 25 - Question 49

Write a program to print the following pattern:
5
45
345
2345
12345

Input:
No input is required.

Output:
Five lines, where line i starts at (6 - i) and counts up to 5.

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
    int row, column;

    for (row = 1; row <= 5; row++)
    {
        for (column = 6 - row; column <= 5; column++)
            printf("%d", column);
        printf("\n");
    }

    return 0;
}
