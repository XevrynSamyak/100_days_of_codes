/*
Day 24 - Question 48

Write a program to print the following pattern:
1
12
123
1234
12345

Input:
No input is required.

Output:
Five lines, where line i contains the digits 1 to i.

Constraints:
No constraints are stated on the challenge website.

Sample Input:
(no input)

Sample Output:
1
12
123
1234
12345
*/

#include <stdio.h>

int main()
{
    int row, column;

    for (row = 1; row <= 5; row++)
    {
        for (column = 1; column <= row; column++)
            printf("%d", column);
        printf("\n");
    }

    return 0;
}
