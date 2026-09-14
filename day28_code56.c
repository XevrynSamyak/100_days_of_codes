/*
Day 28 - Question 56

Read and print elements of a one-dimensional array.

Input:
First line: n, the number of elements.
Second line: n integers separated by spaces.

Output:
A single line with the elements separated by single spaces.

Constraints:
No constraints are stated on the challenge website.

Sample Input 1:
3
10 20 30

Sample Output 1:
10 20 30

Sample Input 2:
5
1 2 3 4 5

Sample Output 2:
1 2 3 4 5
*/

#include <stdio.h>

#define MAX 100

int main()
{
    int numbers[MAX], n, i;

    scanf("%d", &n);
    if (n < 1 || n > MAX)
    {
        printf("Size must be between 1 and %d\n", MAX);
        return 1;
    }

    for (i = 0; i < n; i++)
        scanf("%d", &numbers[i]);

    for (i = 0; i < n; i++)
    {
        if (i > 0)
            printf(" ");
        printf("%d", numbers[i]);
    }
    printf("\n");

    return 0;
}
