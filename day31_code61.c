/*
Day 31 - Question 61

Search for an element in an array using linear search.

Input:
First line: n, the number of elements.
Second line: n integers separated by spaces.
Third line: the element to search for.

Output:
A single line: Found at index <index>, or -1 when the element is not present.
Indexes start at 0.

Constraints:
No constraints are stated on the challenge website.

Sample Input 1:
5
1 2 3 4 5
3

Sample Output 1:
Found at index 2

Sample Input 2:
4
10 20 30 40
25

Sample Output 2:
-1
*/

#include <stdio.h>

#define MAX 100

int main()
{
    int numbers[MAX], n, i, key, foundIndex = -1;

    scanf("%d", &n);
    if (n < 1 || n > MAX)
    {
        printf("Size must be between 1 and %d\n", MAX);
        return 1;
    }

    for (i = 0; i < n; i++)
        scanf("%d", &numbers[i]);

    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (numbers[i] == key)
        {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex == -1)
        printf("-1\n");
    else
        printf("Found at index %d\n", foundIndex);

    return 0;
}
