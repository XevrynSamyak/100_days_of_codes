/*
Day 29 - Question 58

Find the maximum and minimum element in an array.

Input:
First line: n, the number of elements.
Second line: n integers separated by spaces.

Output:
A single line: Max=<largest element>, Min=<smallest element>

Constraints:
No constraints are stated on the challenge website.

Sample Input 1:
5
2 9 1 4 7

Sample Output 1:
Max=9, Min=1

Sample Input 2:
3
10 10 10

Sample Output 2:
Max=10, Min=10
*/

#include <stdio.h>

#define MAX 100

int main()
{
    int numbers[MAX], n, i, max, min;

    scanf("%d", &n);
    if (n < 1 || n > MAX)
    {
        printf("Size must be between 1 and %d\n", MAX);
        return 1;
    }

    for (i = 0; i < n; i++)
        scanf("%d", &numbers[i]);

    max = numbers[0];
    min = numbers[0];
    for (i = 1; i < n; i++)
    {
        if (numbers[i] > max)
            max = numbers[i];
        if (numbers[i] < min)
            min = numbers[i];
    }

    printf("Max=%d, Min=%d\n", max, min);

    return 0;
}
