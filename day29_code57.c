/*
Day 29 - Question 57

Find the sum of array elements.

Input:
First line: n, the number of elements.
Second line: n integers separated by spaces.

Output:
A single line with the sum of all the elements.

Constraints:
No constraints are stated on the challenge website.

Sample Input 1:
4
2 4 6 8

Sample Output 1:
20

Sample Input 2:
3
1 1 1

Sample Output 2:
3
*/

#include <stdio.h>

#define MAX 100

int main()
{
    int numbers[MAX], n, i, sum = 0;

    scanf("%d", &n);
    if (n < 1 || n > MAX)
    {
        printf("Size must be between 1 and %d\n", MAX);
        return 1;
    }

    for (i = 0; i < n; i++)
        scanf("%d", &numbers[i]);

    for (i = 0; i < n; i++)
        sum = sum + numbers[i];

    printf("%d\n", sum);

    return 0;
}
