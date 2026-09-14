/*
Day 25 - Question 50

Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

Input:
No input is required.

Output:
Five lines. Line i starts with (i - 1) spaces and then (6 - i) stars.

Constraints:
No constraints are stated on the challenge website.

Sample Input:
(no input)

Sample Output:
*****
 ****
  ***
   **
    *

Note:
The website lists a second "sample output" reading "Note: Spaces indicate
indentation." That line is a remark about the pattern, not a second expected
output. The pattern printed in the question is the output this program produces.
*/

#include <stdio.h>

int main()
{
    int row, space, star;

    for (row = 1; row <= 5; row++)
    {
        for (space = 1; space < row; space++)
            printf(" ");
        for (star = row; star <= 5; star++)
            printf("*");
        printf("\n");
    }

    return 0;
}
