/*
Day 23 - Question 45

Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

Input:
A single line with one integer n: the number of terms.

Output:
A single line: Approximate sum: <sum rounded to 2 decimal places>

Constraints:
No constraints are stated on the challenge website.

Sample Input 1:
3

Sample Output 1:
Approximate sum: 1.56

Sample Input 2:
5

Sample Output 2:
Approximate sum: 2.22

Note:
The website shows "Approximate sum: 1.56" for n = 3 and "Approximate sum: 2.22" for
n = 5, but the series it prints (2/3 + 4/7 + 6/11 + 8/15 + ...) adds up to 1.78 for
n = 3 and 2.84 for n = 5. This program adds exactly the terms that the question
shows, so its answers differ from the website's printed ones.
*/

#include <stdio.h>

int main()
{
    int n, k;
    double sum = 0.0;

    scanf("%d", &n);

    for (k = 1; k <= n; k++)
        sum = sum + (2.0 * k) / (4.0 * k - 1.0);    /* 2/3, 4/7, 6/11, 8/15, ... */

    printf("Approximate sum: %.2f\n", sum);

    return 0;
}
