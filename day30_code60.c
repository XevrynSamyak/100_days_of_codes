/*
Day 30 - Question 60

Count positive, negative, and zero elements in an array.

Input:
First line: n, the number of elements.
Second line: n integers separated by spaces.

Output:
A single line: Positive=<count>, Negative=<count>, Zero=<count>

Constraints:
No constraints are stated on the challenge website.

Sample Input:
5
-1 0 1 2 -2

Sample Output:
Positive=2, Negative=2, Zero=1
*/

#include <stdio.h>

#define MAX 100

int main()
{
    int numbers[MAX], n, i, positive = 0, negative = 0, zero = 0;

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
        if (numbers[i] > 0)
            positive++;
        else if (numbers[i] < 0)
            negative++;
        else
            zero++;
    }

    printf("Positive=%d, Negative=%d, Zero=%d\n", positive, negative, zero);

    return 0;
}
