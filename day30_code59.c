/*
Day 30 - Question 59

Count even and odd numbers in an array.

Input:
First line: n, the number of elements.
Second line: n integers separated by spaces.

Output:
A single line: Even=<count of even numbers>, Odd=<count of odd numbers>

Constraints:
No constraints are stated on the challenge website.

Sample Input 1:
6
1 2 3 4 5 6

Sample Output 1:
Even=3, Odd=3

Sample Input 2:
4
2 4 6 8

Sample Output 2:
Even=4, Odd=0
*/

#include <stdio.h>

#define MAX 100

int main()
{
    int numbers[MAX], n, i, even = 0, odd = 0;

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
        if (numbers[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even=%d, Odd=%d\n", even, odd);

    return 0;
}
