/*
Day 31 - Question 62

Reverse an array without taking extra space.

Input:
First line: n, the number of elements.
Second line: n integers separated by spaces.

Output:
A single line with the elements in reverse order, separated by single spaces.

Constraints:
No constraints are stated on the challenge website.

Sample Input:
4
1 2 3 4

Sample Output:
4 3 2 1
*/

#include <stdio.h>

#define MAX 100

int main()
{
    int numbers[MAX], n, i, left, right, temp;

    scanf("%d", &n);
    if (n < 1 || n > MAX)
    {
        printf("Size must be between 1 and %d\n", MAX);
        return 1;
    }

    for (i = 0; i < n; i++)
        scanf("%d", &numbers[i]);

    /* Swap the two ends and move inwards, so no second array is needed. */
    left = 0;
    right = n - 1;
    while (left < right)
    {
        temp = numbers[left];
        numbers[left] = numbers[right];
        numbers[right] = temp;
        left++;
        right--;
    }

    for (i = 0; i < n; i++)
    {
        if (i > 0)
            printf(" ");
        printf("%d", numbers[i]);
    }
    printf("\n");

    return 0;
}
