/*
Day 22 - Question 44

Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

Input:
A single line with one integer n: the number of terms.

Output:
A single line: Approximate sum: <sum rounded to 2 decimal places>

Constraints:
No constraints are stated on the challenge website.

Sample Input 1:
3

Sample Output 1:
Approximate sum: 3.3

Sample Input 2:
5

Sample Output 2:
Approximate sum: 4.4

Note:
The website shows "Approximate sum: 3.3" for n = 3 and "Approximate sum: 4.4" for
n = 5, but the series it prints (1 + 3/4 + 5/6 + 7/8 + ...) adds up to 2.58 for
n = 3 and 4.36 for n = 5. This program adds exactly the terms that the question
shows, so its answers differ from the website's printed ones.
*/

#include <stdio.h>

int main()
{
    int n, k;
    double sum = 0.0;

    scanf("%d", &n);

    for (k = 1; k <= n; k++)
    {
        if (k == 1)
            sum = sum + 1.0;                            /* first term is 1 */
        else
            sum = sum + (2.0 * k - 1.0) / (2.0 * k);    /* 3/4, 5/6, 7/8, ... */
    }

    printf("Approximate sum: %.2f\n", sum);

    return 0;
}
